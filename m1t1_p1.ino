// C++ code
//
//Assigning the variables representing the led and the PIR sensor to their pin
int ledPin = 13;
int sensorPin = 2;

void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(sensorPin, INPUT); // Set the sensor pin as input
  Serial.begin(9600); //Initialises serial monitor
}

void loop()
{
  if (digitalRead(sensorPin) == HIGH)
  {
    digitalWrite(ledPin, HIGH);
    Serial.print("Sensor Activated\n");
   
  }
  else
  {
    digitalWrite(ledPin, LOW); // 
    Serial.print("Sensor Not Activated\n");
  }
}

