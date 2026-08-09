/*
  Project: Smart Traffic Light Controller with 7-Segment Countdown
  Description: Controls a multi-directional traffic light system with 
               synchronized Red, Yellow, and Green LEDs alongside a 
               7-segment display countdown timer using an Arduino Uno.
  Author: Aman Dhurve
  Domain: Embedded Systems
*/

int red1 = 2;
int yellow1 = 3;
int green1 = 4;

int red2 = 5;
int yellow2 = 6;
int green2 = 7;

// 7-segment pins
int a = 8;
int b = 9;
int c = 10;
int d = 11;
int e = 12;
int f = 13;
int g = A0;

void setup()
{
  pinMode(red1, OUTPUT);
  pinMode(yellow1, OUTPUT);
  pinMode(green1, OUTPUT);

  pinMode(red2, OUTPUT);
  pinMode(yellow2, OUTPUT);
  pinMode(green2, OUTPUT);

  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
}

// DISPLAY NUMBER FUNCTION
void displayDigit(int num)
{
  switch(num)
  {
    case 0:
      digitalWrite(a,HIGH);
      digitalWrite(b,HIGH);
      digitalWrite(c,HIGH);
      digitalWrite(d,HIGH);
      digitalWrite(e,HIGH);
      digitalWrite(f,HIGH);
      digitalWrite(g,LOW);
      break;

    case 1:
      digitalWrite(a,LOW);
      digitalWrite(b,HIGH);
      digitalWrite(c,HIGH);
      digitalWrite(d,LOW);
      digitalWrite(e,LOW);
      digitalWrite(f,LOW);
      digitalWrite(g,LOW);
      break;

    case 2:
      digitalWrite(a,HIGH);
      digitalWrite(b,HIGH);
      digitalWrite(c,LOW);
      digitalWrite(d,HIGH);
      digitalWrite(e,HIGH);
      digitalWrite(f,LOW);
      digitalWrite(g,HIGH);
      break;

    case 3:
      digitalWrite(a,HIGH);
      digitalWrite(b,HIGH);
      digitalWrite(c,HIGH);
      digitalWrite(d,HIGH);
      digitalWrite(e,LOW);
      digitalWrite(f,LOW);
      digitalWrite(g,HIGH);
      break;
  }
}

void loop()
{
  // ROAD 1 GREEN
  digitalWrite(green1, HIGH);
  digitalWrite(red2, HIGH);

  for(int i=3; i>=0; i--)
  {
    displayDigit(i);
    delay(1000);
  }

  digitalWrite(green1, LOW);
  digitalWrite(yellow1, HIGH);

  delay(2000);

  digitalWrite(yellow1, LOW);
  digitalWrite(red2, LOW);

  // ROAD 2 GREEN
  digitalWrite(green2, HIGH);
  digitalWrite(red1, HIGH);

  for(int i=3; i>=0; i--)
  {
    displayDigit(i);
    delay(1000);
  }

  digitalWrite(green2, LOW);
  digitalWrite(yellow2, HIGH);

  delay(2000);

  digitalWrite(yellow2, LOW);
  digitalWrite(red1, LOW);
}
