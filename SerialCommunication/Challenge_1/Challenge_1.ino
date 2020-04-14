#define LED 13

int data;

void setup()
{
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
}

void loop()
{
  if(Serial.available() > 0) {
    data = Serial.parseInt();
    // Uncomment the code belo to debug data.
    // Serial.println(data);
    digitalWrite(LED, HIGH);
    delay(data);
    digitalWrite(LED, LOW);
    delay(data);
  } else {
  	digitalWrite(LED, HIGH);
  	delay(500);
  	digitalWrite(LED, LOW);
  	delay(500);
  }
  
}