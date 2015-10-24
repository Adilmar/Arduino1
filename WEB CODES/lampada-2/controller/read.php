<html>
<head>
	<meta charset="utf-8">
    <meta http-equiv="refresh" content="15" >;
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<title>Controle de Iluminação </title>
	<link rel="stylesheet" href="../themes/lampada.min.css" />
	<link rel="stylesheet" href="../themes/jquery.mobile.icons.min.css" />
	<link rel="stylesheet" href="http://code.jquery.com/mobile/1.4.5/jquery.mobile.structure-1.4.5.min.css" />
	<script src="http://code.jquery.com/jquery-1.11.1.min.js"></script>
	<script src="http://code.jquery.com/mobile/1.4.5/jquery.mobile-1.4.5.min.js"></script>
</head>
<body>
	<div data-role="page" data-theme="b">
		<div data-role="header" data-position="inline">
			<h1 align="center"><img src="../images/logo.png" style="width:50%; height:auto"></h1>
		</div>
		<div data-role="content" data-theme="a">
			
			<table data-role="table" id="table-column-toggle" data-mode="column" class="ui-responsive table-stroke">
 

  <tr>
    <td align="center"><a href="#" data-role="button" data-icon="" target="_parent"><img src="../images/ler.png"/>
    <br>Luminosidade<br>
    
    <br></a> </td>
  </tr>
  
  <tr>
    <td align="center">
    
   <?php include "leitura.php" ?>
    
    </td>
  </tr>
  
  
</table>
			
		</div>
	</div>
</body>
</html>