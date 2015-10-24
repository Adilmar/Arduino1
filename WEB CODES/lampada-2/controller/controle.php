
<?php

 //variavel para receber o valor
$valor=$_GET['valor'];     


//condicao 

if($valor==0){               
	$port = fopen("COM3", "w");  //define a porta e o metodo a ser executado
	fwrite($port,0);             //escreve
	fclose($port);               //fecha a comunicaçao
	echo '<meta http-equiv="refresh" content="0;URL=../index.html">'; 
}	

if($valor==1){
	$port = fopen("COM3", "w");
	fwrite($port,1);
	fclose($port);
	echo '<meta http-equiv="refresh" content="0;URL=../index.html">';  
}



?>