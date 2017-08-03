var gulp        = require('gulp'),
    browserSync = require('browser-sync'),
    sass        = require('gulp-sass'),
    prefix      = require('gulp-autoprefixer'),
    concat      = require('gulp-concat'),
    uglify      = require('gulp-uglify'),
    shell       = require('gulp-shell'),
    sourcemaps  = require('gulp-sourcemaps'),
    cleanCSS = require('gulp-clean-css');

var paths = {
  scripts: '../jsdev/**/*.js',
  images: '../images/**/*',
  styles: '../sass/style.scss',
  styleSass: '../sass/**/*.scss',
  bootstrap: '../bootstrap/**/*.scss',
  php: './**/*.php'
};

var URL = 'collabcoinstall.dev'
var URLPort = 3001;

/**
 * @task sass
 * Compile files from scss
 */
gulp.task('sass', function () {
  return gulp.src(paths.styles) // the source .scss file
  .pipe(sourcemaps.init())
  .pipe(sass()) // pass the file through gulp-sass
  .on('error', printError)
  .pipe(prefix(['last 15 versions', '> 1%', 'ie 8', 'ie 7'], { cascade: true })) // pass the file through autoprefixer
  .pipe(cleanCSS({compatibility: 'ie8'}))
  .pipe(sourcemaps.write())
  .pipe(gulp.dest('../css')) // output .css file to css folder
  .pipe(browserSync.reload({stream:true})) // reload the stream
});

gulp.task('scripts', function() {

  return gulp.src(paths.scripts)
    .pipe(sourcemaps.init())
    .pipe(concat('script.js'))
    .pipe(uglify())
    .pipe(sourcemaps.write())
    .pipe(gulp.dest('../js'));
});

gulp.task('scripts-dist', function() {
  return gulp.src(paths.scripts)
    .pipe(concat('script.js'))
    .pipe(uglify())
    .pipe(gulp.dest('../js'));
});



gulp.task('sass-dist', function () {
  return gulp.src(paths.styles) // the source .scss file
  .pipe(sass()) // pass the file through gulp-sass
  .on('error', printError)
  .pipe(prefix(['last 15 versions', '> 1%', 'ie 8', 'ie 7'], { cascade: true })) // pass the file through autoprefixer
  .pipe(cleanCSS({compatibility: 'ie8'}))
  .pipe(gulp.dest('../css')) // output .css file to css folder
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
      browserSync.init({
        open: 'external',
        // host: URL,
        proxy: URL,
        port: URLPort // for work mamp
      });
});

/**
 * @task watch
 * Watch scss files for changes & recompile
 * Clear cache when Drupal related files are changed
 */
gulp.task('watch', function () {
  gulp.watch([paths.styleSass, '../bootstrap/**/*.scss'], ['sass','reload']);
  gulp.watch([paths.scripts], ['scripts','reload']);
  gulp.watch('../**/*.{php,inc,info}',['clearcache','reload']);
});

/**
 * Default task, running just `gulp` will
 * compile Sass files, launch BrowserSync & watch files.
 */
gulp.task('default', ['browser-sync','scripts','sass','watch']);

gulp.task('dist', ['scripts-dist', 'sass-dist']);

function printError (error) {
  console.log('Error: ' + error.toString());
  this.emit('end');
}
