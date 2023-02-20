//Smart Stick for Blind People Using Arduino UNO and Ultrasonic Sensor

int trigger_pin = 2;
int echo_pin = 3;
int buzzer_pin = 10; 
int time;
int distance; 
void setup() 
{
        Serial.begin (9600); 
        pinMode (trigger_pin, OUTPUT); 
        pinMode (echo_pin, INPUT);
        pinMode (buzzer_pin, OUTPUT);
}
void loop() 
{
    digitalWrite (trigger_pin, HIGH);
    delayMicroseconds (10);
    digitalWrite (trigger_pin, LOW);
    time = pulseIn (echo_pin, HIGH);
    distance = (time * 0.034) / 2;

  if (distance <= 30) 
        {
        Serial.println (" Object is near ");
        Serial.print (" Distance= ");              
        Serial.println (distance);        
        digitalWrite (buzzer_pin, HIGH);
        delay (500);
        digitalWrite (buzzer_pin, LOW);
        delay (500);
        }
         if (distance <= 20) 
        {
        Serial.println (" Object is near ");
        Serial.print (" Distance= ");              
        Serial.println (distance);        
        digitalWrite (buzzer_pin, HIGH);
        delay (200);
        digitalWrite (buzzer_pin, LOW);
        delay (200);
        }
      if (distance <= 10) 
        {
        Serial.println (" Object is near ");
        Serial.print (" Distance= ");              
        Serial.println (distance);        
        digitalWrite (buzzer_pin, HIGH);
        delay (50);
        digitalWrite (buzzer_pin, LOW);
        delay (50);
        }
  else {
        Serial.println (" object is far ");
        Serial.print (" Distance= ");              
        Serial.println (distance);        
        digitalWrite (buzzer_pin, LOW);
        delay (250);        
       } 
}
