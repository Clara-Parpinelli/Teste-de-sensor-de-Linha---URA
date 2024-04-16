<h1 align="center">SENSOR DE REFLETÂNCIA</h1>
<h3 align="center">Um breve resumo sobre o funcionamento, testes aplicados no laboratório e sugestões de uso.</h4>
<br/>

# Tabela de Conteúdos
- [Como usar](#gear-como-usar)
- [Teste realizado](#construction_worker-teste-realizado)

# :gear: Como usar
O sensor de refletância é um dispositivo usado para detectar a presença ou ausência de objetos com base na quantidade de luz refletida. Ele funciona emitindo luz (geralmente infravermelha) em direção a um objeto e medindo a quantidade de luz refletida de volta para o sensor. Aqui estão alguns pontos-chave sobre os sensores de refletância:

 1. Princípio de Funcionamento: O sensor emite um feixe de luz e possui um receptor para captar a luz refletida. A quantidade de luz refletida varia dependendo das propriedades ópticas do objeto (como cor e textura) e da distância entre o sensor e o objeto.
 2. Tipos de Sensores: Existem diferentes tipos de sensores de refletância, como os que utilizam LEDs infravermelhos para emitir luz e fotodiodos para detectar a luz refletida. Alguns sensores também podem ter filtros para melhorar a precisão da detecção em determinadas condições de iluminação.
 3. Calibração: Em alguns casos, é necessário calibrar os sensores de refletância para ajustar sua sensibilidade e garantir medições precisas, especialmente em ambientes com variações de luz intensa.
 4. Limitações: Os sensores de refletância podem ser afetados por condições ambientais, como luz solar direta ou superfícies muito brilhantes que podem causar reflexos intensos. Além disso, a cor e a textura do objeto podem influenciar na quantidade de luz refletida, exigindo ajustes na sensibilidade do sensor.
<br/>

O tipo de sensor de refletância trabalhado em laboratório foi o Sensor Infravermelho. Este tipo de sensor emite luz infravermelha em direção a um objeto e mede a quantidade de luz refletida de volta. É frequentemente usado em aplicações de detecção de objetos, como em robôs seguidores de linha, detectores de obstáculos e sistemas de controle de proximidade.
No Arduino, conectamos um dos pinos do sensor ao GND (terra), outro à alimentação de 5V e o último a uma porta digital:

![Imagem do WhatsApp de 2024-04-15 à(s) 22 41 59_f26e4bdd](https://github.com/Clara-Parpinelli/Teste-de-sensor-de-Linha---URA/assets/144749472/eecc43f6-ed09-4139-a0cb-b853148bb1a1)
<br/>

# :construction_worker: Teste realizado
Durante o teste laboratorial, foi implementado um código simples que permitia ao sensor de linha identificar se estava sobre uma região preta ou branca, retornando a cor detectada.
```c++
> Teste_01.ino

// O código do arduino é lido de cima para baixo, então iremos seguir esse padrão

//Mapeamento do pino conectado ao sensor de linha. Nesse exemplo foi utilizado a porta 8 para conectar ao sensor. 
#define pinSensor1 8 

//O Sensor Infravermelho atua como uma entrada, pois faz a leitura da região à qual foi exposto e retorna essa informação para o código.
void setup() {
  pinMode(pinSensor1, INPUT);
  Serial.begin(9600)
}

void loop() {
  //A variável booleana estadoSensor1 lê a informação retornada pelo sensor sendo 1 para "Preto ou nada" e 0 para "Branco ou diferente de preto"
  bool estadoSensor1 = digitalRead(pinSensor1);
  
  if (estadoSensor1){
    //Se o estadoSensor1 receber o valor 1 da leitura do sensor é mostrado a mensagem "Preto (ou nada)"
    Serial.println("Preto (ou nada)")
  }else{
    //Se o estadoSensor1 receber o valor 0 da leitura do sensor é mostrado a mensagem "Branco (diferente de preto)"
    Serial.println("Branco (diferente de preto)")
  }
}
```
</br>
Para mais informações de como o código funciona, <a href="/Teste_01.ino">Acesse o código aqui</a>













