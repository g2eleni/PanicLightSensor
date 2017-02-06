
int sensor = 0;
int PR = 0; // value of output
int light = 200;
int led = 2;
int led2 = 3;

void setup(){
  Serial.begin(9600);
  pinMode(8, OUTPUT);
}

void loop() {
  
  PR = analogRead(sensor);
  Serial.println(PR); 
  //delay(100);
  if (PR < light)
  {

    digitalWrite(led2, HIGH);
    delay(700);
    digitalWrite(led2, LOW);
    delay(300);
    
    digitalWrite(led2, HIGH);
    delay(700);
    digitalWrite(led2, LOW);
    delay(300);

    digitalWrite(led2, HIGH);
    delay(700);
    digitalWrite(led2, LOW);
    delay(500);

     digitalWrite(led2, HIGH);
    delay(700);
    digitalWrite(led2, LOW);
    delay(300);
    
    digitalWrite(led2, HIGH);
    delay(700);
    digitalWrite(led2, LOW);
    delay(300);

    digitalWrite(led2, HIGH);
    delay(700);
    digitalWrite(led2, LOW);
    delay(500);

    digitalWrite(led2, HIGH);
    delay(700);
    digitalWrite(led2, LOW);
    delay(300);
    
    digitalWrite(led2, HIGH);
    delay(200);
    digitalWrite(led2, LOW);
    delay(200);

    digitalWrite(led2, HIGH);
    delay(700);
    digitalWrite(led2, LOW);
    delay(500);
  }
  else {

    digitalWrite(led, LOW);

    digitalWrite(led, HIGH);
    delay(150);
    digitalWrite(led, LOW);
    delay(200);
    
    digitalWrite(led, HIGH);
    delay(150);
    digitalWrite(led, LOW);
    delay(200);
    
    digitalWrite(led, HIGH);
    delay(150);
    digitalWrite(led, LOW);
    delay(350);
    
    digitalWrite(led, HIGH);
    delay(700);
    digitalWrite(led, LOW);
    delay(300);
    
    digitalWrite(led, HIGH);
    delay(700);
    digitalWrite(led, LOW);
    delay(300);

    digitalWrite(led, HIGH);
    delay(700);
    digitalWrite(led, LOW);
    delay(300);

    digitalWrite(led, HIGH);
    delay(150);
    digitalWrite(led, LOW);
    delay(200);
    
    digitalWrite(led, HIGH);
    delay(150);
    digitalWrite(led, LOW);
    delay(200);
    
    digitalWrite(led, HIGH);
    delay(150);
    digitalWrite(led, LOW);
    delay(500);

  }


}
