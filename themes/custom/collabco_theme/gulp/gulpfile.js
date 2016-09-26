var gulp        = require('gulp'),
    browserSync = require('browser-sync'),
    sass        = require('gulp-sass'),
    prefix      = require('gulp-autoprefixer'),
    shell       = require('gulp-shell'),
    sourcemaps  = require('gulp-sourcemaps'),
    cleanCSS = require('gulp-clean-css');

/**
 * @task sass
 * Compile files from scss
 */
gulp.task('sass', function () {
  return gulp.src('../sass/style.scss') // the source .scss file
  .pipe(sass()) // pass the file through gulp-sass
  .on('error', printError)
  .pipe(prefix(['last 15 versions', '> 1%', 'ie 8', 'ie 7'], { cascade: true })) // pass the file through autoprefixer
  .pipe(gulp.dest('../css')) // output .css file to css folder
  .pipe(browserSync.reload({stream:true})) // reload the stream
});


/**
 * @task sass
 * Compile files from scss
 */
gulp.task('sass-production', function () {
  return gulp.src('../sass/style.scss') // the source .scss file
  .pipe(sass()) // pass the file through gulp-sass
  .on('error', printError)
  .pipe(prefix(['last 15 versions', '> 1%', 'ie 8', 'ie 7'], { cascade: true })) // pass the file through autoprefixer
  .pipe(cleanCSS({compatibility: 'ie8'}))
  .pipe(gulp.dest('../css')) // output .css file to css folder
  .pipe(browserSync.reload({stream:true})) // reload the stream
});

/**
 * @task clearcache
 * Clear all caches
 */
gulp.task('clearcache', function() {
  return shell.task([
   'drush cc all'
  ]);
});

/**
 * @task reload
 * Refresh the page after clearing cache
 */
gulp.task('reload', ['clearcache'], function () {
  browserSync.reload();
});


/*

*/

gulp.task('browser-sync', function() {
        //browserSync.init(null, { proxy: "drupalresearch.dev" });
      browserSync.init({
      	open: 'external',
      	host: 'govims.dev',
      	proxy: 'govims.dev',
      	port: 8080 // for work mamp
      });
});

/**
 * @task watch
 * Watch scss files for changes & recompile
 * Clear cache when Drupal related files are changed
 */
gulp.task('watch', function () {
  gulp.watch(['../sass/**/*.scss', '../bootstrap/**/*.scss'], ['sass','reload']);
  gulp.watch('../**/*.{php,inc,info}',['clearcache','reload']);
});


gulp.task('prod', ['sass-production']);

/**
 * Default task, running just `gulp` will 
 * compile Sass files, launch BrowserSync & watch files.
 */
gulp.task('default', ['browser-sync', 'watch']);

function printError (error) {

  // If you want details of the error in the console
  console.log('Error2: ' + error.toString());
  this.emit('end');

}


