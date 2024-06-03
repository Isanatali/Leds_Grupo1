
#define led_verde 11


void setup()
{
  pinMode(led_verde, OUTPUT);
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

}
