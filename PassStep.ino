/*

*/


const int switchPin = 13;     // the number of the switch pin



int buttonState = 0;
int switchState= 0;
int stepCounter = -1;       // variable for stepcounter

void setup() {
  // initialize the LED pins as an output:
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(0, INPUT_PULLUP);
  // initialize the pushbutton pin as an input:
  pinMode(switchPin, INPUT_PULLUP);
  Serial.begin(9600);

}

void loop() {
  // read the state of the pushbutton value:
  switchState = digitalRead(switchPin);
  buttonState= digitalRead(0);

  if (switchState == HIGH) {
    stepCounter++;
    Serial.print(stepCounter);
    delay(200);
  } else {
  }

if (buttonState == LOW){
Serial.print("PRESSSED!");

if (stepCounter == 1) {
  do{
  digitalWrite(5, LOW);
  digitalWrite(12, HIGH);
  }while(buttonState==LOW);
}
else if (stepCounter == 2) {
    do{
  digitalWrite(5, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(4, LOW);
  }while(buttonState==LOW);
}
else if (stepCounter == 3) {
  do{
  digitalWrite(5, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  }while(buttonState==LOW);
}
else if ((4 <= stepCounter) && (stepCounter <= 8)) {
  do{
  digitalWrite(5, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
  }while(buttonState==LOW);
} 
else if ((9 <= stepCounter) && (stepCounter <= 15)) {
    do{
  digitalWrite(5, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
  digitalWrite(1, LOW);
  }while(buttonState==LOW);
} 
else if ((16 <= stepCounter)&& (stepCounter <= 27)) {
   do{
  digitalWrite(5, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
  digitalWrite(1, LOW);
  delay(10);
   digitalWrite(5, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(1, LOW);
  delay(10);
  }while(buttonState==LOW);
} 
else if ((28 <= stepCounter) && (stepCounter <= 50)) {
     do{
  digitalWrite(5, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
  digitalWrite(1, LOW);
  delay(10);
   digitalWrite(5, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(1, LOW);
  delay(10);
  digitalWrite(11, LOW);
  digitalWrite(1, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(1, LOW);
  delay(10);
  }while(buttonState==LOW);
}
else if ((51 <= stepCounter) && (stepCounter <= 99)) {
       do{
  digitalWrite(5, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
  digitalWrite(1, LOW);
  delay(10);
   digitalWrite(5, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(1, LOW);
  delay(10);
  digitalWrite(11, LOW);
  digitalWrite(1, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  delay(10);
  }while(buttonState==LOW);
} 
else if ((100 <= stepCounter) && (stepCounter <= 160)) {
        do{
  digitalWrite(5, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
  digitalWrite(1, LOW);
  delay(10);
   digitalWrite(5, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(1, LOW);
  delay(10);
  digitalWrite(11, LOW);
  digitalWrite(1, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  delay(10);
  }while(buttonState==LOW);
} 
else if ((161 <= stepCounter) && (stepCounter <= 350)) {
          do{
  digitalWrite(5, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
  digitalWrite(1, LOW);
  delay(10);
   digitalWrite(5, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(1, LOW);
  delay(10);
  digitalWrite(11, LOW);
  digitalWrite(1, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  delay(10);
  }while(buttonState==LOW);
} 
else if ((351 <= stepCounter) && (stepCounter <= 650)) {
         do{
  digitalWrite(5, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
  digitalWrite(1, LOW);
  delay(10);
   digitalWrite(5, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(1, LOW);
  delay(10);
  digitalWrite(11, LOW);
  digitalWrite(1, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  delay(10);
  }while(buttonState==LOW);
} 
else if ((651 <= stepCounter) && (stepCounter <= 1400)) {
      do{
  digitalWrite(5, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
  digitalWrite(1, LOW);
  delay(10);
   digitalWrite(5, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(1, LOW);
  delay(10);
  digitalWrite(11, LOW);
  digitalWrite(1, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  delay(10);
  digitalWrite(10, LOW);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(5, LOW);
  delay(10);
  }while(buttonState==LOW);
} 
else if ((1401 <= stepCounter) && (stepCounter <= 2200)) {
       do{
  digitalWrite(5, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
  digitalWrite(1, LOW);
  delay(10);
   digitalWrite(5, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(1, LOW);
  delay(10);
  digitalWrite(11, LOW);
  digitalWrite(1, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  delay(10);
  digitalWrite(10, LOW);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(5, LOW);
  delay(10);
  digitalWrite(9, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(5, LOW);
  delay(10);
  }while(buttonState==LOW);
} 
else if ((2201 <= stepCounter) && (stepCounter <= 5000)) {
     do{
  digitalWrite(5, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
  digitalWrite(1, LOW);
  delay(10);
   digitalWrite(5, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(1, LOW);
  delay(10);
  digitalWrite(11, LOW);
  digitalWrite(1, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  delay(10);
  digitalWrite(10, LOW);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(5, LOW);
  delay(10);
  digitalWrite(9, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
  delay(10);
  }while(buttonState==LOW);
} 
else if ((5001 <= stepCounter) && (stepCounter <= 9000)) {
       do{
  digitalWrite(5, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
  digitalWrite(1, LOW);
  delay(10);
   digitalWrite(5, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(1, LOW);
  delay(10);
  digitalWrite(11, LOW);
  digitalWrite(1, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  delay(10);
  digitalWrite(10, LOW);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(5, LOW);
  delay(10);
  digitalWrite(9, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  delay(10);
  }while(buttonState==LOW);
} 
else if ((9001 <= stepCounter) && (stepCounter <= 18000)) {
    do{
  digitalWrite(5, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
  digitalWrite(1, LOW);
  delay(10);
   digitalWrite(5, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(1, LOW);
  delay(10);
  digitalWrite(11, LOW);
  digitalWrite(1, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  delay(10);
  digitalWrite(10, LOW);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(5, LOW);
  delay(10);
  digitalWrite(9, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
  delay(10);
  }while(buttonState==LOW);
} 
else if ((18001 <= stepCounter) && (stepCounter <= 36000)) {
    do{
  digitalWrite(5, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
  digitalWrite(1, LOW);
  delay(10);
   digitalWrite(5, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(1, LOW);
  delay(10);
  digitalWrite(11, LOW);
  digitalWrite(1, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  delay(10);
  digitalWrite(10, LOW);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(5, LOW);
  delay(10);
  digitalWrite(9, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
  digitalWrite(1, LOW);
  delay(10);
  }while(buttonState==LOW);
} 
else if ((36001 <= stepCounter) && (stepCounter <= 60000)) {
  do{
  digitalWrite(5, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
  digitalWrite(1, LOW);
  delay(10);
   digitalWrite(5, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(1, LOW);
  delay(10);
  digitalWrite(11, LOW);
  digitalWrite(1, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  delay(10);
  digitalWrite(10, LOW);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(5, LOW);
  delay(10);
  digitalWrite(9, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
  digitalWrite(1, LOW);
  delay(10);
  digitalWrite(8, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(1, LOW);
  delay(10);
  }while(buttonState==LOW);
} 
else if ((60001 <= stepCounter) && (stepCounter <= 145000)) {
   do{
  digitalWrite(5, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
  digitalWrite(1, LOW);
  delay(10);
   digitalWrite(5, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(1, LOW);
  delay(10);
  digitalWrite(11, LOW);
  digitalWrite(1, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  delay(10);
  digitalWrite(10, LOW);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(5, LOW);
  delay(10);
  digitalWrite(9, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
  digitalWrite(1, LOW);
  delay(10);
  digitalWrite(8, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(1, LOW);
  delay(10);
  digitalWrite(7, LOW);
  digitalWrite(1, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(1, LOW);
  delay(10);
  }while(buttonState==LOW);
} 
else if ((145001 <= stepCounter) && (stepCounter <= 500000)) {
     do{
  digitalWrite(5, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
  digitalWrite(1, LOW);
  delay(10);
   digitalWrite(5, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(1, LOW);
  delay(10);
  digitalWrite(11, LOW);
  digitalWrite(1, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  delay(10);
  digitalWrite(10, LOW);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(5, LOW);
  delay(10);
  digitalWrite(9, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
  digitalWrite(1, LOW);
  delay(10);
  digitalWrite(8, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(1, LOW);
  delay(10);
  digitalWrite(7, LOW);
  digitalWrite(1, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  delay(10);
  }while(buttonState==LOW);
} 
else if ((500000 <= stepCounter) && (stepCounter <= 800000)) {
     do{
  digitalWrite(5, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
  digitalWrite(1, LOW);
  delay(10);
   digitalWrite(5, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(1, LOW);
  delay(10);
  digitalWrite(11, LOW);
  digitalWrite(1, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  delay(10);
  digitalWrite(10, LOW);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(5, LOW);
  delay(10);
  digitalWrite(9, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
  digitalWrite(1, LOW);
  delay(10);
  digitalWrite(8, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(1, LOW);
  delay(10);
  digitalWrite(7, LOW);
  digitalWrite(1, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  delay(10);
  }while(buttonState==LOW);
} 
else if ((800001 <= stepCounter) && (stepCounter <= 1352078)) {
      do{
  digitalWrite(5, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
  digitalWrite(1, LOW);
  delay(10);
   digitalWrite(5, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(1, LOW);
  delay(10);
  digitalWrite(11, LOW);
  digitalWrite(1, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  delay(10);
  digitalWrite(10, LOW);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(5, LOW);
  delay(10);
  digitalWrite(9, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
  digitalWrite(1, LOW);
  delay(10);
  digitalWrite(8, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(1, LOW);
  delay(10);
  digitalWrite(7, LOW);
  digitalWrite(1, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  delay(10);
  }while(buttonState==LOW);
} 
else {
    }  
} else{
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  }

}

