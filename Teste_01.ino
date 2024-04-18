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
