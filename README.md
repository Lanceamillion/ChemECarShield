# ChemE Car Shield
Designed, Manufactured and Taught by Lance Nichols
This repository serves a usage and quick startup guide for using the **ChemE Car Shield.** 
This shield attaches to an Arduino and seeks simpify and consolidate the electronics of a 
basic Chem-E Car.

The features of the unit in order of simplicity include:
* 9V battery holder
* power switch
* Relay
* Basic User Interface
  * RGB LED
  * User Defined Switch
  * Reset Button
* 1K Voltage Divider for analog inputs
* 10k Voltage Diveder for analog inputs
* I2C 3.3v Logic Level Shifter
## Specs
If you already know what you are doing here are the pins that are used.
If you dont understand what this means continue to the totorial.

This device uses the following arduino pins:
| Pin | Connection     | I/O | Notes                                             |
|-----|----------------|-----|---------------------------------------------------|
| 2   | Relay          | O   | On when high                                      |
| 3   | Red LED        | O   | On when high,PWM enabled                          |
| 4   | Switch         | I   | Connects to ground when closed SW pullup required |
| 5   | Blue LED       | O   | On when high,PWM enabled                          |
| 6   | Green LED      | O   | On when high,PWM enabled                          |
| A0  | Analog 1K Div  | I   | Pulled high by 1k ohm resistor                    |
| A1  | Analog 10K Div | I   | Pulled high by 10k ohm resistor                   |
| A4  | SDA            | I/O | Pulled high by logic level converter              |                       
| A5  | SCL            | O   | Pulled high by logic level converter              |

## Totorial
This totorial seeks to bring familiarity with these basic digital electronics in the context of
ChemE Car. Here you will learn just as much or as little as you need to make your car work and
your team sucseed.

### Download the software
To begin you will need to install the Arduino IDE (Integrated Developmen Enviroment) software on your computer. The download link
can be found at [arduino.cc/en/software](https://www.arduino.cc/en/software).

### Downloading the repository


### Step 1: Your first Program
