int red = 3;

void setup() {

  // put your setup code here, to run once:
  pinMode(red, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:


  for ( int i = 0; i < 255; i++)
  {
    analogWrite( red , i);
    delay(100);
    if (i == 254)
    {
    
      for (i= 254 ; i > 0; i--)
      {
        analogWrite( red , i);
        delay(10);
      }
      delay(10);
    }
  }

}
