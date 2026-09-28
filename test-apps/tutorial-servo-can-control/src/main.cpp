#include "TutorialServo.h"
#include "mbed.h"

AnalogIn potIn(PA_0);
TutorialServo servo(PA_1);

int main() {
  while (true) {
    servo.setPositionInDegrees(potIn.read() * servo.getServoRangeInDegrees());
    ThisThread::sleep_for(20ms);
  }
}