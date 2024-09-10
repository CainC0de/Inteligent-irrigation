import time
import numpy as np

class SoilMoistureMonitor:
    def __init__(self, freq_sensor_pin, threshold=500, sampling_rate=1.0):
        self.freq_sensor_pin = freq_sensor_pin
        self.threshold = threshold
        self.sampling_rate = sampling_rate
        
    def read_frequency(self):
        return self.simulate_sensor_reading()
    
    def simulate_sensor_reading(self):
        return np.random.uniform(100, 1000)
    
    def convert_frequency_to_moisture(self, freq):
        moisture_level = 100 - (freq / 10)
        return max(0, min(100, moisture_level))
    
    def decide_irrigation(self, moisture_level):
        if moisture_level < self.threshold:
            return "Irrigate"
        else:
            return "Do not irrigate"
    
    def monitor_soil(self):
        while True:
            freq = self.read_frequency()
            moisture_level = self.convert_frequency_to_moisture(freq)
            action = self.decide_irrigation(moisture_level)
            print(f"Frequency: {freq:.2f} Hz, Moisture Level: {moisture_level:.2f} %, Action: {action}")
            time.sleep(self.sampling_rate)

if __name__ == "__main__":
    monitor = SoilMoistureMonitor(freq_sensor_pin=1, threshold=30, sampling_rate=5.0)
    monitor.monitor_soil()
