<?php
    $perguntas = array ("qual o melhor filme",
    "qual foi o momento mais engracado na historia da humanidade",
    "qual a opcao correta",
    "Como pode a energia de um fóton ser dada por E = hf, quando a simples presença da freqüência f indica que a luz é uma onda?",
    "complete a letra da musica: Never gonna...");

    $alternativas = array (array ("A) velozes e furioso 9","B) quentin tarantino","C) vingadores ultimato 2","D) scooby doo que eles vao pra ilha la"),
        array("A) quando o cara se transformou num picles","B) quando pedro h. dutra duraes contou uma piada (dica: nao e esse)","C) quer ouvir outra piada murray?","D) rico vs pobre winderson nunes"),
        array("A) essa aqui","B) a de cima","C)a primeira","D) ir para a proxima pergunta"),
        array("A) 8,6 x 1018 Hz","B) tântalo (4,2 eV), tungstênio (4,5 eV), alumínio (4,08 eV)","C) albert einstein escrevendo a biblia","D) 2,11 eV"),
        array("A) give you up","B) let you down","C) run around and desert you","D) todas as alternativas"),
        );

    $altCorretas = array ("D","A","D","C","D");

    function carregaPergunta($id)
    {
        global $perguntas, $alternativas, $perguntaAtual;
        $perguntaAtual = $id - 1;
        echo ($id) . " - $perguntas[$perguntaAtual]<br>";
        for ($i = 0; $i < count($alternativas)-1; $i++) 
        {
            echo $alternativas[$perguntaAtual][$i] . "<br>";
        }
        echo "<br>";
    }
?>