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
| 3   | Red LED        | O   | On when high, PWM enabled                         |
| 4   | Switch         | I   | Connects to ground when closed SW pullup required |
| 5   | Blue LED       | O   | On when high, PWM enabled                         |
| 6   | Green LED      | O   | On when high, PWM enabled                         |
| A0  | Analog 1K Div  | I   | Pulled high by 1k ohm resistor                    |
| A1  | Analog 10K Div | I   | Pulled high by 10k ohm resistor                   |
| A4  | SDA            | I/O | Pulled high by logic level converter              |                       
| A5  | SCL            | O   | Pulled high by logic level converter              |

## Totorials
This totorial seeks to bring familiarity with these basic digital electronics in the context of
ChemE Car. Here you will learn just as much or as little as you need to make your car work and
your team sucseed.

### Download the software
To begin you will need to install the Arduino IDE (Integrated Developmen Enviroment) software on
your computer. The download linkcan be found at 
[arduino.cc/en/software](https://www.arduino.cc/en/software).

### Downloading the repository
1. To download this repository navigate to 
[github.com/Lanceamillion/ChemECarShield](https://github.com/Lanceamillion/ChemECarShield) 
(you may already be here)
2. In the top left Code>Donload ZIP
3. Extract the .zip to a convinenent location (Maybe your deskop or documents folder)
4. Done!

### Totorial 1: Your first Program "Hello World"
#### Purpose
In this section you will learn how to output text/data to your computer. Unitlizing this
communication is important to understand so that you can gather data from your sensors on
the car and incoperate that data into your final program. We will talk more about this
spesifically how to gather data in future totorials but for now we are going to address
the basics of printing to the serial terminal.

#### Do it!
1. Plug the ChemECarShield to the arduino
2. Attaching the battery/turning on the battery switch is not nessiciary for this totorial
3. Plug in the arduino into your computer
4. Navigate to ChemECarShield>Examples>1 Hello World
5. Look over the code and read the comments such that you are familiar with what is happening
6. Once you understand the code navigate to tools>Port and select the port with the arduino
7. Now click the arrow at the top left to upload the code to the arduino
8. Check the progress in the console the bottom of the screen
9. In the top right open the serial monitor
10. With the serial monitor open make sure you have the correct baud rate selected
11. You should now see the "Hello ChemE" message in the serial monitor

#### Going further for better undersanding
Try changing the message in the code and uploading it.

#### Takeaways
You should now:
* Understand the need to output infomation to the serial monitor
* Understand how to output status and data to your computer

### Totorial 2: Digital Outputs
#### Purpose
In this section you will learn how to use digital outputs to display information to the user and
control digital systems. Digital outputs can fufil various functions for example indicatior
LED and relay.

#### Do it!
1. Plug the ChemECarShield to the arduino
2. Attaching the battery/turning on the battery switch is not nessiciary for this totorial
3. Plug in the arduino into your computer
4. Navigate to ChemECarShield>Examples>2 Blinky
5. Look over the code and read the comments such that you are familiar with what is happening
6. Upload the code (If you don't rememeber how to do this look back to totorial 1)
7. Observe the red led blinking on 1 second off 1 second

#### Going further for better undersanding
* Try changing the code so the led blinks twice as fast
* Try changing the code so that the led blinks green you will need to look up what pin the green
LED is on in the table at the top
* Try changing the code so the relay turns on and off insted of the LED. The relay is on pin 2
when you bring the pin HIGH it will connect the terminals on the terminal block together (see the
board overview image to identify the terminal block). If the pin is brought LOW or the arduino dosen't
have power the relay will be open (not on).
* Try changing the code so the led blinks red>green>red>green

#### Takeaways
You should now:
* Understand how to set the state of digital outputs
* Understand how to use the delay function
* Understand how to find pin numbers on the pin diagaram

### Totorial 3: Digital Inputs
### Totorial 4: Analog Inputs
### Totorial 5: Program Structure
### Totorial 6: Advanced Program Structure
