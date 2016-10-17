int ldr = A3;
int led12 = 12;
int led11 = 11;
int led10 = 10;
int led9 = 9;

void setup() {
  
  pinMode(led9, OUTPUT);
  pinMode(led10, OUTPUT);
  pinMode(led11, OUTPUT);
  pinMode(led12, OUTPUT);
  
  Serial.begin(9600);
}

void loop() {


int valueldr = analogRead(ldr);  //here we read the potentiometer value
int value1 = map(valueldr,0,1023,0,4); //we assign a value from 0 to 4
int value2 = map(valueldr,0,1023,1,5);  //we assign a v


 if(valueldr++){             //if the value of the potentiometer increases 
  for(int i=0; i<value1; i++){  //switch on the led depending on the potentiometer value
    digitalWrite(9+i,HIGH);
  }
  
 }
 
 if(valueldr--){                //if the value of the potentiometer increases
  for(int j=0; j<value2; j++){    //switch off the led depending on the potentiometer value
   digitalWrite(12-j,LOW); 
  }

 }



}

