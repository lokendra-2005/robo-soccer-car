#ifndef BATTERY_MONITOR_H
#define BATTERY_MONITOR_H

#include <Arduino.h>

#define BATTERY_PIN 34  // ADC pin for voltage sensing

float readBatteryVoltage() {
  int raw = analogRead(BATTERY_PIN);
  float voltage = (raw / 4095.0) * 3.3 * 3; // Assuming voltage divider
  return voltage;
}

#endif

