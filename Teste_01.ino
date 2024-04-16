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
