// Pin used by the Relay
int relayPin = 2;

void setup(){
  Serial.begin(9600);
  // Set the pin for outputing.
  pinMode(relayPin, OUTPUT);
}

void loop(){
  for(int i = 0; i < 100; i++){
    // If 'i' is even, turn the relay on, else, turn it off.
    if(i % 2 == 0){
      digitalWrite(relayPin, HIGH);
    }
    else{
      digitalWrite(relayPin, LOW);
    }
    delay(1000);
  }
}
