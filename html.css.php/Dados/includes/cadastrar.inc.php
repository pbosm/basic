<?php

 //inserimos o comando para recebimento de dados no formulario e envio destes dados na base de dados
 $timee             = $_POST['time'];
 $jogos_total      = $_POST['jogos_total'];
 $jogos_blueside   = $_POST['jogos_blueside'];
 $pegou_blueside   = $_POST['pegou_blueside'];
 $jogos_redside    = $_POST['jogos_redside'];
 $pegou_redside    = $_POST['pegou_redside'];

 //antes de enviar os dados do formulario para o banco de dados, devemos utilizar os comandos que irão 
 //varrer as variáveis e detectar se há tentativa de invasão do banco de dados por meio do ataque injeção de SQL
 $timee             = $conexao->escape_string($timee);
 $jogos_total      = $conexao->escape_string($jogos_total);
 $jogos_blueside   = $conexao->escape_string($jogos_blueside);
 $pegou_blueside   = $conexao->escape_string($pegou_blueside);
 $jogos_redside    = $conexao->escape_string($jogos_redside);
 $pegou_redside    = $conexao->escape_string($pegou_redside);

 //criando a consultado em SQL que diz para o PHP enviar os dados para o cadastro nos servidor
 $sql = "INSERT $nomeDaTabela VALUES 
 ('$timee', 
  '$jogos_total',
  '$jogos_blueside',
  '$pegou_blueside',
  '$jogos_redside',
  '$pegou_redside')";


 $conexao->query($sql);

