#include <FlowMeter.h> 

FlowMeter Meter = FlowMeter(2);
const unsigned long period = 1000;
void MeterISR() {

    Meter.count();
}

void setup() {
    Serial.begin(9600);
    attachInterrupt(INT0, MeterISR, RISING);
    Meter.reset();
}

void loop() {
    delay(period);
    Meter.tick(period);
    Serial.println("Currently Water Flow = " + String(Meter.getCurrentFlowrate()) + " l/min, " + String(Meter.getTotalVolume())+ " l total.");
}
