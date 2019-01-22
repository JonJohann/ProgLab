void setup() {
  for (int i = 12; i <=4; i-=2) {
    pinMode(i, OUTPUT);
  }

  pinMode(4, INPUT);

}

void lightChange(int pin){
  //turns on and off lights
  digitalWrite(pin,HIGH);
  
  delay(1000);
  
  digitalWrite(pin,LOW);
  
  delay(100);
}

void trafficlightSwitch(bool pedestrian){
  //turn on the designated lights depending on bool pedestrian
  
  if (!pedestrian) {
    for (int i=12;i <=10; i-=2){
      lightChange(i);  
    }
    
  }
  else{
    lightChange(6);
    lightChange(4);
  }
}


void loop() {
  //the loop constantly looks for a pedestrian pressing the button
  if ( digitalRead(2) == HIGH ){
    trafficLightSwitch(true);
    
  }
  else
  {
    trafficLightSwitch(false);
  }
  
  
}
