int PIRsensor1 = 21;   //PIN D21 , Sensor1 connected
int PIRsensor2= 19;   //PIN D21 , Sensor1 connected
int LedPin1 = 32;      //PIN D32 , LED1 connected
int LedPin2 = 33;     //PIN D33 , LED2 connected
int LedPin3 = 25;    //PIN D25 ,LED3 connected
int LedPin4 = 26;    //PIN D26 , LED4 connected
int LedPin5 = 27;   //PIN D27 , LED5 connected


void setup() {

  pinMode(PIRsensor1, INPUT);  // PIR sensor as input 
  pinMode(PIRsensor2, INPUT); // PIR sensor as input  
  pinMode(LedPin1, OUTPUT);  // LED as output
  pinMode(LedPin2, OUTPUT);  // LED as output
  pinMode(LedPin3, OUTPUT);  // LED as output
  pinMode(LedPin4, OUTPUT);  // LED as output
  pinMode(LedPin5, OUTPUT);  // LED as output
  digitalWrite (LedPin3, HIGH); // middle pole light is kept by default high
  
}

void loop(){
  int state1 = digitalRead(PIRsensor1); //read sensor 1 state
   delay(50); 
   int state2 = digitalRead(PIRsensor2); //read sensor 2 state
  delay(50);                         
    if(state1 == HIGH){                
      digitalWrite (LedPin1 , HIGH); 
      digitalWrite (LedPin2 , HIGH); 
      delay(300);  }
    else {
      digitalWrite (LedPin1 , LOW);
      digitalWrite (LedPin2 , LOW);
    }

       if(state2 == HIGH){                
      digitalWrite (LedPin4 , HIGH); 
      digitalWrite (LedPin5 , HIGH); 
      delay(300);   }
    else {
      digitalWrite (LedPin4 , LOW);
      digitalWrite (LedPin5 , LOW);
    }
    
}
