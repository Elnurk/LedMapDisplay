# LedMapDisplay

LedMapDisplay is a demonstration project for interfacing a matrix keypad with a LiquidCrystal I2C display using an Arduino‑compatible microcontroller.  The sketch shows how to map custom keypads, capture user input and print it to a 20×4 LCD screen.  It was developed as an educational example for robotics competitions and microcontroller experiments.

## Features

- **Custom keypad mapping:** defines a 4×3 matrix keypad with flexible key assignments.
- **User input capture:** reads keypad presses in real‑time and appends the pressed digits to a string.
- **LCD display interface:** displays each pressed key immediately on a 20×4 I2C LCD (address 0x27).
- **Clear and display functions:** `*` clears the screen and resets input; `#` prints the full entered value and clears the screen.
- **Simple, modular code:** easy to adapt for different keypad sizes, LCD sizes or additional functionality.

## Hardware

- **Microcontroller:** Arduino‑compatible board (e.g. Arduino Uno).
- **Keypad:** 4×3 matrix keypad.  The row pins should be connected to Arduino digital pins 3, 8, 6 and 5; the column pins to pins 4, 2 and 7 (configurable in the code).
- **Display:** 20×4 I2C LCD at address 0x27 (the [LiquidCrystal_I2C](https://github.com/fdebrabander/Arduino-LiquidCrystal-I2C-library) library is used).
- **Wiring:** connect the keypad and LCD to your microcontroller’s power and ground pins; the LCD’s SDA/SCL lines should go to the corresponding I2C pins on your board.

## Software / Stack

- **Language:** C++ targeting the Arduino platform.
- **Libraries:** uses the [Keypad](https://playground.arduino.cc/Code/Keypad/) library and [LiquidCrystal_I2C](https://github.com/fdebrabander/Arduino-LiquidCrystal-I2C-library) library.  Install these libraries via the Arduino Library Manager or place their folders inside a `library/` directory in this repository.

## Build & Upload

1. Copy the contents of the `library/` directory (if provided) into your Arduino libraries folder (typically `~/Documents/Arduino/libraries`).
2. Open `Keypad.ino` in the Arduino IDE.
3. Select your board type and the correct port.
4. Click **Upload** to compile and upload the firmware.

Alternatively, using the command‑line [arduino‑cli](https://arduino.github.io/arduino-cli/latest/installation/):

```bash
arduino-cli lib install Keypad LiquidCrystal_I2C
arduino-cli compile --fqbn arduino:avr:uno Keypad.ino
arduino-cli upload -p /dev/ttyUSB0 --fqbn arduino:avr:uno Keypad.ino
```

## Contributing

Contributions are welcome!  Feel free to fork this repository, adapt the code for your own keypad/display configuration and submit a pull request.  You can also open issues for bug reports or feature suggestions.

## License

This project is licensed under the MIT License – see the `LICENSE` file for details.
