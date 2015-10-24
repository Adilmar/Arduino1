<?php

// Conecta na porta
$port = fopen('COM3', 'w+');

// Em alguns casos a Arduino pode reiniciar, por isso é bom esperar para enviar informação depois de conectar
sleep(2);

// Agora que a Arduino "Provavelmente já respondeu", pega o valor da resposta
echo "<center>Luminosidade do Ambiente: ".fgets($port)."</center>";

// Fecha a conexão com a porta
fclose($port);

//atualiza informacao


?>

