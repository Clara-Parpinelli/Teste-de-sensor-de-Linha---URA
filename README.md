<h1 align="center">SENSOR DE REFLETÂNCIA</h1>
<h3 align="center">Um breve resumo sobre o funcionamento, testes aplicados no laboratório e sugestões de uso.</h3>
<br/>

# Tabela de Conteúdos
- [Como usar](#gear-como-usar)
- [Teste realizado](#construction_worker-teste-realizado)
- [Ideias para aplicação](#bulb-ideias-para-aplicação)
<br/>

# :gear: Como usar
O sensor de refletância é um dispositivo usado para detectar a presença ou ausência de objetos com base na quantidade de luz refletida. Ele funciona emitindo luz (geralmente infravermelha) em direção a um objeto e medindo a quantidade de luz refletida de volta para o sensor. Aqui estão alguns pontos-chave sobre os sensores de refletância:

 1. Princípio de Funcionamento: O sensor emite um feixe de luz e possui um receptor para captar a luz refletida. A quantidade de luz refletida varia dependendo das propriedades ópticas do objeto (como cor e textura) e da distância entre o sensor e o objeto.
 2. Tipos de Sensores: Existem diferentes tipos de sensores de refletância, como os que utilizam LEDs infravermelhos para emitir luz e fotodiodos para detectar a luz refletida. Alguns sensores também podem ter filtros para melhorar a precisão da detecção em determinadas condições de iluminação.
 3. Calibração: Em alguns casos, é necessário calibrar os sensores de refletância para ajustar sua sensibilidade e garantir medições precisas, especialmente em ambientes com variações de luz intensa.
 4. Limitações: Os sensores de refletância podem ser afetados por condições ambientais, como luz solar direta ou superfícies muito brilhantes que podem causar reflexos intensos. Além disso, a cor e a textura do objeto podem influenciar na quantidade de luz refletida, exigindo ajustes na sensibilidade do sensor.

<br/>

<p align="center">
  <img src="https://github.com/Clara-Parpinelli/Teste-de-sensor-de-Linha---URA/assets/144749472/c3a075ca-af0b-45e0-9d87-dd875a7a98b6" />
</p>

<br/>

O tipo de sensor de refletância trabalhado em laboratório foi o Sensor Infravermelho. Este tipo de sensor emite luz infravermelha em direção a um objeto e mede a quantidade de luz refletida de volta. É frequentemente usado em aplicações de detecção de objetos, como em robôs seguidores de linha, detectores de obstáculos e sistemas de controle de proximidade.
No Arduino, conectamos um dos pinos do sensor ao GND (terra), outro à alimentação de 5V e o último a uma porta digital:

<p align="center">
  <img src="https://github.com/Clara-Parpinelli/Teste-de-sensor-de-Linha---URA/assets/144749472/eecc43f6-ed09-4139-a0cb-b853148bb1a1" />
</p>

<br/>

# :construction_worker: Teste realizado
Durante o teste laboratorial, foi implementado um código simples que permitia ao sensor de linha identificar se estava sobre uma região preta ou branca, retornando a cor detectada.
```c++
> Teste_01.ino

// O código do arduino é lido de cima para baixo, então iremos seguir esse padrão

//Mapeamento do pino conectado ao sensor de linha. Nesse exemplo foi utilizado a porta 8 para conectar ao sensor. 
#define pinSensor1 8;
//Mapeamento do Led conectado a protoboard. Nesse exemplo foi utilizado a porta 12 para conectar ao sensor. 
#define Led 12;

void setup(){
//O Sensor Infravermelho atua como uma entrada, pois faz a leitura da região à qual foi exposto e retorna essa informação para o código.
  pinMode(pinoSensor, INPUT); 
  pinMode(Led, OUTPUT);
//Definimos que o Led irá começar desligado
  digitalWrite(Led, LOW); 
}  

void loop() {
  //Se a leitura feita pelo sensor infravermelho for LOW, indica que ele detectou um objeto em sua frente. Nesse caso, o LED será ativado ou ligado.
  if (digitalRead(pinoSensor) == LOW){ 
        digitalWrite(Led, HIGH); 
  }else{
  //Senão não a nada na frente do sensor, logo o Led continuará desligado
        digitalWrite(Led, LOW);
  }    
}
```
Para mais informações de como o código funciona, <a href="/Teste_01.ino">Acesse o código aqui</a>
<br/><br/>
O teste foi realizado em cerca de trinta sensores no laboratório, somente dois apresentaram problemas.
<br/>
# :bulb: Ideias para aplicação
Esta seção é deidicada a ideias de aplicação dos sensores de refletância para a Olímpiada Brasileira de Robôtica (OBR). Sua modalidade denominada "Robótica de Resgate", simula uma operação de resgate de vítimas em situações de desastre, empregando robôs totalmente autônomos sem intervenção humana.

<h4>Ideia 01: Robô Seguidor de Linha</h4>
Durante a competição, o robô deve acompanhar uma linha escura demarcada na área de atuação. Para cumprir essa exigência, pode-se utilizar dois sensores de refletância na frente do robô. Eles detectam a presença ou ausência de uma linha preta, permitindo que o robô ajuste sua trajetória ao longo do desafio, mantendo a linha preta entre os sensores. O manual da prova também especifica possíveis variações no padrão da linha ao longo do percurso. Para mais informações sobre os padrões de linha acesse, <a href="https://obr.robocup.org.br/documentos-e-manuais/">Sugestões de Ladrilhos</a>.

<br/>
<h4>Ideia 02: Detecção de Obstáculos</h4>
Na área de prova, além dos diferentes padrões de desenho da linha, o robô pode encontrar obstáculos que simulam destroços de um desastre. Segundo o manual da competição, o robô pode receber 20 pontos adicionais se conseguir desviar desses obstáculos. Os sensores infravermelhos têm a capacidade de detectar objetos que se aproximam do robô. Durante a prova, ajustando o alcance da emissão de luz infravermelha, esses sensores podem enviar sinais ao código do robô, exigindo que ele pare e desvie do objeto detectado. Isso pode ser crucial para o desempenho do robô na competição. Para mais informações sobre a área da prova e sobre os obstáculos acesse, <a href="https://obr.robocup.org.br/documentos-e-manuais/">Manual de Regras e Instruções – Resgate</a>.






