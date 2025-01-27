const int dry = 579;
const int wet = 272; 

void setup() 
{
  Serial.begin(9600); 
}

void loop()
{
  int sensorVal = analogRead(A0);
  int percentageHumidity = map(sensorVal, wet, dry, 100, 0);

  Serial.print(percentageHumidity);
  Serial.println("%");

  delay(100);
}
