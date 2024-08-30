#define LEDPIN 11

void setup() {
    // Setup serial for monitor (PC/laptop) and Serial1 for Bluetooth (if needed)
    Serial.begin(9600);   // Serial communication with PC/laptop
    Serial1.begin(9600);  // Serial1 for Bluetooth (optional)
    pinMode(LEDPIN, OUTPUT);
}

void loop() {
    // Example: Send LED status to PC/laptop
    if(Serial1.available() > 0){
        String str = Serial1.readString().substring(0);
        
        if(str == "LED_ON"){
            digitalWrite(LEDPIN, HIGH);
            Serial.println("LED is ON"); // Send status to PC/laptop
        } 
        else if(str == "LED_OFF"){
            digitalWrite(LEDPIN, LOW);
            Serial.println("LED is OFF"); // Send status to PC/laptop
        }
    }
}
