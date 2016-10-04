  <?php

  /**
   * @file
   * Default theme implementation to format an HTML mail.
   *
   * Copy this file in your default theme folder to create a custom themed mail.
   * Rename it to mandrill-message--[module]--[key].tpl.php to override it for a
   * specific mail.
   *
   * Available variables:
   * - $recipient: The recipient of the message
   * - $subject: The message subject
   * - $body: The message body
   * - $css: Internal style sheets
   * - $module: The sending module
   * - $key: The message identifier
   *
   * @see template_preprocess_mandrill_message()
   */
  ?>
  <html>
  <head>
    <meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
</head>
<body id="message-body" <?php if ($module && $key): print 'class="'. $module .'-'. $key .'"'; endif; ?>>


  <div style="min-height:100%;margin:0;padding:0;width:100%;background-color:#f5f5f5">
    <center>
      <table align="center" border="0" cellpadding="0" cellspacing="0" height="100%" width="100%" style="border-collapse:collapse;height:100%;margin:0;padding:0;width:100%;background-color:#f5f5f5">
        <tbody>
          <tr>
            <td align="center" valign="top" style="height:100%;margin:0;padding:20px 10px;width:100%;border-top:0">  

              <table border="0" cellpadding="0" cellspacing="0" width="100%" style="border-collapse:collapse;border:0;max-width:600px!important; font-family: 'Verdana';">
                <tbody>
                  <tr>
                    <td style="padding: 10px 10px;">
                      <h1  style="text-transform: uppercase; text-align: center; font-size: 22px; color:#57468b;">
                        <?php print $subject; ?>
                      </h1>
                    </td>
                  </tr>
                  
                  <tr>
                    <td style='background-color: #ffffff; padding: 10px 15px; color:#757575; font-family: Verdana;'>
                        <?php print $body; ?>
                    </td>
                  </tr>    

                  <tr>
                   <td valign='top' style='padding-top:15px; margin-bottom: 15px; padding-right:18px;padding-bottom:9px;padding-left:18px;word-break:break-word;color:#656565;font-family:Verdana;font-size:12px;line-height:150%;text-align:center'>
                    <p>If you would like to change your email notification settings, please visit the website, click your name in the top-right and click 'Edit Your Profile'.</p>
                    <p style='font-style: italic;'>© Copyright 2016. govIMS.</p>
                  </td>
                </tr>

              </tbody>
            </table>    
          </td>
        </tr>
      </tbody> 
    </table>
  </center>     
</div>

</body>
</html>
