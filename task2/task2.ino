int sw1 = 3;
int sw2 = 5;
int sw3 = 6;
int sw4 = 9;
int red = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode( red, OUTPUT);
  pinMode(sw1, INPUT);
  pinMode(sw2, INPUT);
  pinMode(sw3, INPUT);
  pinMode(sw4, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:


  while (digitalRead(sw1) == HIGH)
  {
    analogWrite( red , 250);
  }
  while (digitalRead(sw2) == HIGH)
  {
    if (digitalRead(sw4) == HIGH)
    {
      analogWrite( red , 255);
    }
    else
      analogWrite( red , 150);
  }
  while (digitalRead(sw3) == HIGH)
  {
    analogWrite( red , 100);
  }
  while (digitalRead(sw4) == HIGH)
  {
    if (digitalRead(sw2) == HIGH)
    {
      analogWrite( red , 255);
    }
    else
      analogWrite( red , 0);
  }



  /*
    if (digitalRead(sw1) == HIGH)
    {
      analogWrite( red , 250);
    }

    if ( digitalRead(sw2) == HIGH)
    {
      analogWrite( red , 150);
    }

    if (digitalRead(sw3) == HIGH)
    {
      analogWrite( red , 100);
    }

    if (digitalRead(sw4) == HIGH)
    {
      analogWrite( red , 0);
    }
    if (digitalRead(sw2) == HIGH && digitalRead(sw4) == HIGH )
    {
      analogWrite(red, 50);
    }*/

}
