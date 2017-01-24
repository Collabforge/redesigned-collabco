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
                    <td style='background-color: #ffffff; padding: 10px 15px; color:#757575; font-family: Verdana;'>
                        <?php print $body; ?>
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
