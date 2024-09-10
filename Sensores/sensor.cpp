#include <Arduino.h>

class SoilMoistureMonitor {
public:
    SoilMoistureMonitor(int freqSensorPin, int threshold = 500, float samplingRate = 1.0)
        : freqSensorPin(freqSensorPin), threshold(threshold), samplingRate(samplingRate) {}

    void setup() {
        pinMode(freqSensorPin, INPUT);
        Serial.begin(9600);
    }

    void loop() {
        float freq = readFrequency();
        float moistureLevel = convertFrequencyToMoisture(freq);
        String action = decideIrrigation(moistureLevel);

        Serial.print("Frequency: ");
        Serial.print(freq);
        Serial.print(" Hz, Moisture Level: ");
        Serial.print(moistureLevel);
        Serial.print(" %, Action: ");
        Serial.println(action);

        delay(samplingRate * 1000);
    }

private:
    int freqSensorPin;
    int threshold;
    float samplingRate;

    float readFrequency() {
        return simulateSensorReading();
    }

    float simulateSensorReading() {
        return random(100, 1000);  // Simulated frequency value
    }

    float convertFrequencyToMoisture(float freq) {
        float moistureLevel = 100 - (freq / 10);
        return constrain(moistureLevel, 0, 100);
    }

    String decideIrrigation(float moistureLevel) {
        return moistureLevel < threshold ? "Irrigate" : "Do not irrigate";
    }
};

SoilMoistureMonitor monitor(A0, 30, 5.0);

void setup() {
    monitor.setup();
}

void loop() {
    monitor.loop();
}
