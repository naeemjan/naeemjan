<html>
  <head>
    <meta http-equiv="Content-Type" content="text/html;charset=utf-8" />




  </head>
  <body>

          <table width="100%" border="0" cellspacing="0" cellpadding="0" style="font-family: verdana, arial, helvetica;">
             <tr>
                <td nowrap="wrap" style="line-height: 1.6em;" valign="top" width="80">

			<img src="http://gundara.com/sites/default/files/logo/empty_logo.gif" />
                </td>
		<td style="font-family: verdana, arial, helvetica; font-size: 30px;  valign=top;" >Gundara<br>
		<p style="font-family: verdana, arial, helvetica; font-size: 15px;">Fair Trade Leather Bags from Afghanistan and More<br>
		<?php print t('http://gundara.com'); ?><br></p>
<p style="font-family: verdana, arial, helvetica; font-size: 15px;">
<b><i>-  <?php print t('Invoice No'); ?> <?php print $info['order_number']; ?> -</b></i>
</p>

		</td>
		<td style="font-size:11px; width:33%; align:top;">Amat Amoros & Wiegmann  GbR<br>
Jean Amat Amoros & Gunda Wiegmann<br>
		Kiefholzstraße 417<br>
		12435 Berlin<br>
+49-30-21978476<br>
		+49 176 402 077 91<br><br>
		<i><?php print t('Tax Number'); ?></i>: 36/207/60472<br>
		<i><?php print t('VAT Number'); ?></i>: DE279930776<br></td>
		
             </tr>
	     <tr>
		<td>
		</td>

           </table>




    <table width="100%" border="0" cellspacing="0" cellpadding="1" align="center" bgcolor="#CCC">
      <tr>
        <td>
          <table width="100%" border="0" cellspacing="0" cellpadding="5" align="center" bgcolor="#FFF" style="font-family: verdana, arial, helvetica; font-size: 10px;">
            <tr>
              <td>
                <table width="100%" border="0" cellspacing="0" cellpadding="0" style="font-family: verdana, arial, helvetica; font-size: 11px;">
                  <tr>
                    <td nowrap="nowrap" style="line-height: 1.6em;" valign="middle">

                    </td>
                  </tr>
                </table>
              </td>
            </tr>
            <tr>
              <td>


                <table width="100%" border="0" cellspacing="0" cellpadding="0" style="font-family: verdana, arial, helvetica; font-size: 11px;">
                  <tr>
                    <th colspan="2"><?php print t('Order Summary'); ?></b></th>
                  </tr>
                  <tr>
                    <td colspan="2">
                      
                      <table class="details" width="100%" cellspacing="0" cellpadding="0" style="font-family: verdana, arial, helvetica; font-size: 1em;">
                        <tr>
                          <td valign="top" width="33%">
                            <br/>
                            <b><?php print t('Account No:'); ?></b> <?php print $info['order_uid']; ?><br/>
<b><?php print t('Email Address:'); ?></b> <?php print $info['order_mail']; ?>
                            <br/>
                            <b><?php print t('Order Date:'); ?></b> <?php print date('j F, Y', $info['order_created']); ?><br/>
                            <br/>
                            

	



                          </td>
                          <td valign="top" width="33%">
                            <br/>
                           
                            

                            <b><?php print t('Billing Info:'); ?></b><br />
                            <?php print $info['customer_billing']; ?><br />


                          </td>




                          <td valign="top" width="33%">

                           
                            
                            <br/>
                            <b><?php print t('Shipping Address:'); ?></b><br />
                            <?php print $info['customer_shipping']; ?><br />


                          </td>
                        </tr>
                      </table>
                      
                    </td>
                  </tr>
                </table>
              </td>
            </tr>
            <tr>
              <td>
                <table class="products" width="100%" border="0" cellspacing="0" cellpadding="0" align="center" style="font-family: verdana, arial, helvetica; font-size: 11px;">
                  <tbody>
                    <tr>
                      <td class="line-items"><?php print $info['line_items']; ?></td>
                    </tr>
                    <tr>
                      <td><?php print $info['order_total'] ?></td>
                    </tr>
                  </tbody>
                </table>
              </td>
            </tr>
            <tr>
              <td>
                <table>
                  <tr>
                    <td colspan="2" style="background: #EEE; color: #666; padding: 1em; font-size: 0.9em; line-height: 1.6em; border-top: #CCC 1px dotted; text-align: center;">

                    </td>
                  </tr>
                </table>
              </td>
            </tr>
          </table>
        </td>
      </tr>
    </table>
  </body>
<footer style="font-size:11px"><i><div align="center">
<p>
 <b>-    <?php print t('   Thank you for being our client and for paying this bill before   ') . date('d M Y', strtotime(date('j F Y', $info['order_created']) . "+15 days")); ?>    -</b></i>
</p>
<p style="font-size:10px"><b><?php print t('Bank Details'); ?>: </b>Volksbank Göttingen / Gunda Wiegmann / <i><?php print t('Bank Ref.'); ?></i>: 26090050  / <i><?php print t('Account Number'); ?></i>: 0104857001 / 
<i>BIC</i>: GENODEF1GOE / <br><i>IBAN</i>: DE64260900500104857001 / <i><?php print t('Bank Address'); ?> </i>: Volksbank Göttingen eG / Kurze-Geismar-Straße 2 / 37073 Göttingen / <?php print t('Germany'); ?> <br>
		<b>Paypal:</b>gundara@gundara.com<br>

</p>








</div>
</footer>
</html>
