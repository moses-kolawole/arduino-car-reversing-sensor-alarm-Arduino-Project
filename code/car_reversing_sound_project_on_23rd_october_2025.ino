int ledpin1 = 10;
int ledpin2 = 11;
int buzzpin = 9;
int potpin = A0;
int potvalue;
int pitch;
int delay_time = 250;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledpin1, OUTPUT);
  pinMode(ledpin2, OUTPUT);
  pinMode(buzzpin, OUTPUT);
  pinMode(potpin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
potvalue = analogRead(potpin);

pitch = map(potvalue, 0, 1023, 200, 2000);

tone(buzzpin, pitch);

digitalWrite(ledpin1, HIGH);
tone(buzzpin, pitch);
delay(delay_time);
noTone(buzzpin);
delay(delay_time);
digitalWrite(ledpin1, LOW);

digitalWrite(ledpin2, HIGH);
tone(buzzpin, pitch);
delay(delay_time);
noTone(buzzpin);
delay(delay_time);
digitalWrite(ledpin2, LOW);

//delay(500);
}


