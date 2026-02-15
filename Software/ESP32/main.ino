
---

## **3️⃣ software/esp32/main.ino**  
Base motor control code template:

```cpp
#include <Arduino.h>
#include "motor_control.h"
#include "battery_monitor.h"

// Motor pins
#define IN1 26
#define IN2 27
#define IN3 14
#define IN4 12
#define ENA 25
#define ENB 33

void setup() {
  Serial.begin(115200);
  initMotors();
  Serial.println("Robo Soccer Car Initialized");
}

void loop() {
  // Example movement: forward 2 sec, backward 2 sec
  moveForward(2000);
  moveBackward(2000);
  stopMotors(1000);
}

