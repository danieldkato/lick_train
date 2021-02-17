// Dispenses water every time a lick is detected. 
// DDK 2019-07-30

const int solenoid_pin = 4;
const int lick_detector_pin = A2;
const int thresh = 900;
const int valve_open_time = 5; // in milliseconds

void setup() {
  // Set up pins:
  pinMode(solenoid_pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (abs(analogRead(lick_detector_pin)) > thresh){
    digitalWrite(solenoid_pin, HIGH);
    delay(valve_open_time);
    digitalWrite(solenoid_pin, LOW);
  }
}
