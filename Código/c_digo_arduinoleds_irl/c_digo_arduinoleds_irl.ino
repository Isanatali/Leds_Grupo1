
#define led_verde 11
#define led_am 12
#define led_verde2 10

void setup()
{
  pinMode(led_verde, OUTPUT);
  pinMode(led_am, OUTPUT);
  pinMode(led_verde2, OUTPUT);
}

void loop()
{
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



  // Ligando LED amarelo
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

 
 
  //Led verde 2
  digitalWrite(13, HIGH);//liga led 
  delay(200);//espera 200ms
  
  digitalWrite(13, LOW);//apaga led
  delay(200);//espera 200ms
  
  digitalWrite(13, HIGH);//liga led
  delay(200);//espera 200ms
  
  digitalWrite(13, LOW);//apaga o led
  delay(1000);//espera 1000ms


}
