int analogIn = A0;
int sensorVal;
char publishString[10];

void setup() {
    pinMode(analogIn, INPUT);
}

void loop() {
    sensorVal = analogRead(analogIn);
    sprintf(publishString, "%d", sensorVal);
    Particle.publish("lightLevel", publishString, PRIVATE);
    delay(30000);
}
