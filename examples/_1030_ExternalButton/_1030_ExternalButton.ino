#include <ESPert.h>

ESPert espert;
bool currentSwitch = true;

ESPert_Button button;

void setup() {
  espert.init();
  button.init( 15 );
  espert.println("Press USER button to turn on LED.");
}

void loop() {
  bool buttonPressed = button.isOn();

  if (buttonPressed != currentSwitch) {
    if (buttonPressed) {
      espert.println("Button: On");
      espert.led.on();
    } else {
      espert.println("Button: Off");
      espert.led.off();
    }

    currentSwitch = buttonPressed;
  }
}
