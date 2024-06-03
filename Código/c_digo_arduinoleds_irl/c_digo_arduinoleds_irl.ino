
#define led_verde 11
#define led_am 12

void setup()
{
  pinMode(led_verde, OUTPUT);
  pinMode(led_am, OUTPUT);
}

void loop()
{
  digitalWrite(led_verde, HIGH);
  delay(400); // Wait for 600 millisecond(s)
  //liga o verde
  
  digitalWrite(led_verde, LOW);
  delay(600); // Wait for 400 millisecond(s)
  //desliga o verde
  
  digitalWrite(led_verde, HIGH);
  delay(400); // Wait for 600 millisecond(s)
  //liga o verde
  
  digitalWrite(led_verde, LOW);
  delay(600); // Wait for 400 millisecond(s)
  //desliga o verde



  // Ligando LED amarelo
  digitalWrite(led_am, HIGH); 
  delay(100); // Esperar 100ms  
  
  // Apagando LED amarelo
  digitalWrite(led_am, LOW);
  delay(100); // Esperar 100ms

  digitalWrite(led_am, HIGH); 
  delay(100);   
  
  digitalWrite(led_am, LOW);
  delay(100); 


}
