
#define led_verm2 9
#define led_verde2 10
#define led_verde 11
#define led_am 12
#define led_verm 13

void setup()
{
  pinMode(led_verde, OUTPUT);
  pinMode(led_verm, OUTPUT);
  pinMode(led_am, OUTPUT);
  pinMode(led_verde2, OUTPUT);
  pinMode(led_verm2, OUTPUT);
}

void loop()
{
  //Led verde - Alexya
  digitalWrite(led_verde, HIGH);
  delay(400); // Espera por 400 milisegundos
  //liga o verde
  
  digitalWrite(led_verde, LOW);
  delay(600); // Espera por 600 milisegundos
  //desliga o verde
  
  digitalWrite(led_verde, HIGH);
  delay(400); // Espera por 400 milisegundos
  //liga o verde
  
  digitalWrite(led_verde, LOW);
  delay(600); // Espera por 600 milisegundos
  //desliga o verde



  //Led vermelho - Isabella
  digitalWrite(led_verm, HIGH); //Acende led vemelho
  delay(2000); //Espera 2 segundos

  digitalWrite(led_verm, LOW); //Apaga led vermelho
  delay(2000); //Espera 2 segundos

  digitalWrite(led_verm, HIGH); //Acende led vemelho
  delay(2000); //Espera 2 segundos

  digitalWrite(led_verm, LOW); //Apaga led vermelho
  delay(2000); //Espera 2 segundos



  // Ligando LED amarelo - Gabriel
  digitalWrite(led_am, HIGH); 
  delay(100); // Esperar 100ms  
  
  // Apagando LED amarelo
  digitalWrite(led_am, LOW);
  delay(100); // Esperar 100ms
  
  // Ligando LED amarelo
  digitalWrite(led_am, HIGH); 
  delay(100); // Esperar 100ms
    
  // Apagando LED amarelo
  digitalWrite(led_am, LOW);
  delay(100); // Esperar 100ms


 
  //Led verde 2 - Leandro
  digitalWrite(led_verde2, HIGH);//liga led 
  delay(200);//espera 200ms
  
  digitalWrite(led_verde2, LOW);//apaga led
  delay(200);//espera 200ms
  
  digitalWrite(led_verde2, HIGH);//liga led
  delay(200);//espera 200ms
  
  digitalWrite(led_verde2, LOW);//apaga o led
  delay(1000);//espera 1000ms



  //Led vermelho 2 - Thalita
  digitalWrite(led_verm2, HIGH); //Acende o segundo led vemelho
  delay(1000); //Espera 1 segundos

  digitalWrite(led_verm2, LOW); //Apaga o segundo led vermelho
  delay(1500); //Espera 1,5 segundos

  digitalWrite(led_verm2, HIGH); //Acende o segundo led vemelho
  delay(1000); //Espera 1 segundos

  digitalWrite(led_verm2, LOW); //Apaga o segundo led vermelho
  delay(1500); //Espera 1,5 segundos

  

}
