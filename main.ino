int switchState;
const int sensorPin = A0;
void setup() {
  pinMode(2, INPUT);
  Serial.begin(9600);
}

void loop() {
  int sensorval = analogRead(sensorPin);
  switchState = digitalRead(2);
  if (switchState == LOW){
    
    Serial.print("Board Failue \n");
  }else{
    Serial.print("Board OK \n");
  }
  float volt = (sensorval/1024.0) * 5.0;
  float temp = (volt - .5) * 100;
  Serial.print("Temp: ");
  Serial.print(temp);
  Serial.print("°");
  Serial.print("\n \n");
  delay(4000);
}
