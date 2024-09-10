🌿 Smart Irrigation System with Arduino
Welcome to the Smart Irrigation System project! This repository contains the code, schematics, and documentation needed to build an automated irrigation system using Arduino. The system is designed to optimize water usage by monitoring soil moisture levels and watering plants only when needed.

🚀 Features
💧 Automatic Irrigation: Watering is automatically triggered when the soil moisture level falls below a set threshold.
🔧 Manual Override: A button or mobile app interface can be used to manually control the irrigation.
📊 Real-time Monitoring: Monitor soil moisture, temperature, and humidity in real time.
🚨 Low Water Level Alert: Receive alerts when the water reservoir is low.
📟 LCD Display: Displays current moisture level, system status, and other important metrics.
🛠️ Components
Arduino (Uno, Mega, or compatible)
Soil moisture sensor
Relay module
Water pump or solenoid valve
Water reservoir
DHT11/DHT22 sensor (for temperature and humidity monitoring)
LCD display (optional)
Push button (for manual override)
Power supply
📦 Installation
Hardware Setup
Connect the soil moisture sensor to the analog pin of the Arduino.
Wire the relay module to control the water pump/valve.
Attach the DHT11/DHT22 sensor for additional environmental data (optional).
Optionally, connect an LCD to display system information.
Set up a push button for manual irrigation control.
Software Setup
Clone this repository:

bash
Copy code
git clone https://github.com/CainC0de/Inteligent-irrigation.git
cd arduino
Open the irrigacao_com_rele.ino file in the Arduino IDE.

Install the required libraries:

DHT sensor library
LiquidCrystal library (if using LCD)
You can install these through the Arduino Library Manager.

Upload the code to your Arduino.

⚙️ Configuration
Adjust the soil moisture threshold in the code to fit your needs. This is the value that triggers irrigation.
If you're using a different type of sensor or additional components (like a temperature sensor), make sure to modify the corresponding code sections.
📖 Usage
Once the system is powered on, it will monitor the soil moisture levels.
When the moisture drops below the set threshold, the water pump will activate and irrigate the plants until the soil is sufficiently moist.
The LCD (if connected) will display real-time data about the system's status, including moisture level and current temperature.
You can use the manual override button to water the plants at any time.
🛠️ Troubleshooting
No irrigation despite dry soil: Check the soil moisture sensor wiring and ensure it's calibrated correctly.
Pump not activating: Ensure the relay and pump are properly connected and powered.
No display on LCD: Verify the wiring and the code configuration for the LCD.
🌱 Future Improvements
Integrate a Wi-Fi or Bluetooth module for remote monitoring and control.
Add support for multiple irrigation zones.
Incorporate rain detection to avoid watering during rainfall.
🤝 Contributing
Feel free to submit issues and pull requests to improve the system. All contributions are welcome!
