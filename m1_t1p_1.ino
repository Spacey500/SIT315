// C++ code
//

#define sensorPin A0
int ledPin = 2;
void setup()
{
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop()
{
  int reading = analogRead(sensorPin);

  // Convert the reading from the TMP36 sensor into voltage
  float voltage = reading * (5.0 / 1024.0);

  // Convert the voltage into the temperature in Celsius
  float tempC = (voltage - 0.5) * 100;
  
  if (tempC > 20){
    digitalWrite(ledPin, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
  }else{
    digitalWrite(ledPin, LOW);
    delay(1000); // Wait for 1000 millisecond(s)
  }
  Serial.print("Temperature in Celsius: ");
  Serial.print(tempC);
  Serial.print("\n");
}