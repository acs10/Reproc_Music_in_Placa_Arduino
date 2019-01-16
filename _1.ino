int led = 2;
int led2 = 3;
int led4 = 4;
int botao = 7;
int ebotao = 0; 

void setup() {
  pinMode(led ,OUTPUT);
  pinMode(led2 ,OUTPUT);
  pinMode(led4 ,OUTPUT);
  pinMode( botao ,INPUT);
    
}

void loop() {
  /*
  digitalWrite(led,HIGH);
  delay(50);
  digitalWrite(led,LOW);
  delay(50);
    digitalWrite(led2,HIGH);
  delay(50);
  digitalWrite(led2,LOW);
  delay(50);
    digitalWrite(led4,HIGH);
  delay(50);
  digitalWrite(led4,LOW);
  delay(50);
  */

  ebotao = digitalRead(botao);
  if(ebotao  == HIGH)
  {
    digitalWrite(led,HIGH);
    delay(50);
    digitalWrite(led2,HIGH);
    delay(50);
    digitalWrite(led4,HIGH);
    delay(300);
  }
  else{
    digitalWrite(led,LOW);
    delay(50);
    digitalWrite(led2,LOW);
    delay(50);
    digitalWrite(led4,LOW);
    delay(50); 
  }
}
