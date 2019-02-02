int sw = 2;     //digital pin (switch)
int red = 3;    //analoge pin
int yellow = 5; //analoge pin
int green = 6;  //analoge pin
int varR = A0; //analoge input (variable resistance)
int c = 0;     // counter
int val;
int result;


void setup() {
  // put your setup code here, to run once:
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(sw, INPUT);
  pinMode(varR, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = digitalRead(sw); // read value off switch 0 or 5
  result = analogRead(varR); // read value of variable resistance 0>>>1023
  result = result / 4; 

  if (val == HIGH)
  {
    c++;
  }
  if (c == 1)
  {
    analogWrite( red , result);
  }
  if (c == 2)
  {
    analogWrite( yellow , result);
  }
  if (c == 3)
  {
    analogWrite( green , result);
    c = 0;
  }s
}
