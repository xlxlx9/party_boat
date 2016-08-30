/**
 * PIR Motion Sensor (JST) - SEN-13285 
 *
 *
 **/
int pirPin = 2; //digital 2
int flexSensorPin = A0; //analog pin 0
int softpotPin = A1;
int led_pin_out = 12;

void setup(){
  Serial.begin(9600); 
  pinMode(pirPin, INPUT);
  pinMode(led_pin_out, OUTPUT);
  digitalWrite(led_pin_out, LOW);
  digitalWrite(softpotPin, HIGH); //enable pullup resistor
}


void loop(){
//  int pirVal = digitalRead(pirPin);
//
//  if(pirVal == LOW){ //was motion detected
//    Serial.println("Motion Detected");
//    digitalWrite(led_pin_out, HIGH);
//    delay(2000); 
//  } else {
//    digitalWrite(led_pin_out, LOW);
//    delay(1000);
//  }
//  digitalWrite(led_pin_out, LOW);
//  delay(500); 
  
//  int flexSensorReading = analogRead(flexSensorPin);
//  Serial.println(flexSensorReading);
//  int flex0to100 = map(flexSensorReading, 90, 230, 0, 100);
//  Serial.println(flex0to100);

  
  int softpotReading = analogRead(softpotPin);
  Serial.println(softpotReading);

}
