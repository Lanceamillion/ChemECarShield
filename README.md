# ChemE Car Shield
Designed, manufactured and taught by Lance Nichols
this repository serves a usage and quick startup guide for using the **ChemE Car Shield.** 
This shield attaches to an Arduino and seeks simplify and consolidate the electronics of a 
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
* 10k Voltage Divider for analog inputs
* I2C 3.3v Logic Level Shifter
## Specs
If you already know what you are doing here are the pins that are used.
If you don't understand what this means, continue with the tutorial.

This device uses the following arduino pins:
| Pin | Connection     | I/O | Notes                                              |
|-----|----------------|-----|----------------------------------------------------|
| 2   | Relay          | O   | On when high                                       |
| 3   | Red LED        | O   | On when high, PWM enabled                          |
| 4   | Switch         | I   | Connects to ground when closed SW pull up required |
| 5   | Blue LED       | O   | On when high, PWM enabled                          |
| 6   | Green LED      | O   | On when high, PWM enabled                          |
| A0  | Analog 1K Div  | I   | Pulled low by 1k ohm resistor                      |
| A1  | Analog 10K Div | I   | Pulled low by 10k ohm resistor                     |
| A4  | SDA            | I/O | Pulled high by logic level converter               |                       
| A5  | SCL            | O   | Pulled high by logic level converter               |

## Tutorials
These tutorials seek to bring familiarity with these basic digital electronics in the context of
ChemE Car. Here you will learn just as much or as little as you need to make your car work and
your team succeed.

### Download the software
To begin you will need to install the Arduino IDE (Integrated Development Environment) software on
your computer. The download link can be found at 
[arduino.cc/en/software](https://www.arduino.cc/en/software).

### Downloading the repository
1. To download this repository navigate to 
[github.com/Lanceamillion/ChemECarShield](https://github.com/Lanceamillion/ChemECarShield) 
(you may already be here)
2. In the top right Code>Download ZIP
3. Extract the .zip to a convenient location (Maybe your desktop or documents folder)
4. Done!

### Tutorial 1: Your first Program "Hello World"
#### Purpose
In this section you will learn how to output text/data to your computer. Utilizing this
communication is important to understand so that you can gather data from your sensors on
the car and incorporate that data into your final program. We will talk more about this
specifically how to gather data in future tutorials but for now we are going to address
the basics of printing to the serial terminal.

#### Do it!
1. Plug the ChemECarShield to the arduino
2. Attaching the battery/turning on the battery switch is not necessary for this tutorial
3. Plug in the arduino into your computer
4. Navigate to ChemECarShield>Examples>1 Hello World
5. Look over the code and read the comments such that you are familiar with what is happening
6. Once you understand the code navigate to tools>Port and select the port with the arduino
7. Now click the arrow at the top left to upload the code to the arduino
8. Check the progress in the console at the bottom of the screen
9. In the top right open the serial monitor
10. With the serial monitor open make sure you have the correct baud rate selected
11. You should now see the "Hello ChemE" message in the serial monitor

#### Going further for better understanding
Try changing the message in the code and uploading it.

#### Takeaways
You should now:
* Understand the need to output information to the serial monitor
* Understand how to output status and data to your computer

### Tutorial 2: Digital Outputs
#### Purpose
In this section you will learn how to use digital outputs to display information to the user and
control digital systems. Digital outputs can fulfill various functions for example indicator
LED and relay.

#### Do it!
1. Plug the ChemECarShield to the arduino
2. Attaching the battery/turning on the battery switch is not necessary for this tutorial
3. Plug in the arduino into your computer
4. Navigate to ChemECarShield>Examples>2 Blinky
5. Look over the code and read the comments such that you are familiar with what is happening
6. Upload the code (If you don't remember how to do this look back to tutorial 1)
7. Observe the red led blinking on 1 second off 1 second

#### Going further for better understanding
* Try changing the code so the led blinks twice as fast
* Try changing the code so that the led blinks green you will need to look up what pin the green
LED is on in the table at the top
* Try changing the code so the relay turns on and off instead of the LED. The relay is on pin 2.
When you bring the pin HIGH it will connect the terminals on the terminal block together (see the board overview image to identify the terminal block). If the pin is brought LOW or the arduino doesn't
have power the relay will be open (not on).
* Try changing the code so the led blinks red>green>red>green

#### Takeaways
You should now:
* Understand how to set the state of digital outputs
* Understand how to use the delay function
* Understand how to find pin numbers on the pin diagram

### Tutorial 3: Digital Inputs
#### Purpose
In this section you will learn how to use digital Inputs allowing you to read basic user inputs and feedback. The concept of a pullup resistor is utilized; this resistor ensures that the input pin of the arduino is connected to a reference voltage at all times and when the switch is in both positions. When the switch is “closed” it is then connected to ground which drives the voltage of the pin to the low state. The Arduino uno has so called internal pullup resistors meaning there isn't a physical resistor on the board but rather one is activated inside the arduino’s microcontroller. These specifics aren’t important to understand but keep in mind that pullup resistors are necessary for many digital inputs such as switches and buttons.

#### Do it!
1. Plug the ChemECarShield to the arduino
2. Attaching the battery/turning on the battery switch is not necessary for this tutorial
3. Plug in the arduino into your computer
4. Navigate to ChemECarShield>Examples>3 Switch
5. Look over the code and read the comments such that you are familiar with what is happening
6. Upload the code
7. Open the serial monitor
8. Flip the switch on the shield and observe the output

#### Going further for better understanding
* Change the code to use the relay instead of the LED
* Change the code so the switch works in the opposite position

#### Takeaways
You should now:
* The importance of pullup resistors in digital inputs
* Understand how to read and process digital inputs

### Tutorial 4: Analog Inputs
#### Purpose
In this section you will learn how to read and record analog inputs. Analog inputs allow you to read much more than just a one or a zero; they allow you to detect the voltage applied to a particular pin. This can be very valuable for many analog sensors such as photoresistors and thermistors. In both cases the concept of a voltage divider is utilized. This divider essentially provides a reference resistance for the variable resistance of the photoresistor or thermistor to be compared against providing a variable voltage to be measured by an analog pin of the arduino. As you can see in the ChemE Car Shield pin table two pins (A0,A1) have already been attached to voltage dividing resistors. So that additional dividing resistors don't have to be utilized.

#### Do it!
1. Plug the ChemECarShield to the arduino
2. Attaching the battery/turning on the battery switch is not necessary for this tutorial
3. Plug in the arduino into your computer
4. Navigate to ChemECarShield>Examples>4 Analog
5. Look over the code and read the comments such that you are familiar with what is happening
6. Upload the code
7. Open the serial monitor
8. Use a piece of metal to bridge A0 to 5v and observe the change in value and the LED
9. Close the serial monitor and navigate to tools>serial plotter
10. Try placing the metal or a resistor between the terminals and observe the effect

#### Going further for better understanding
* Change the threshold of the LED trigger

#### Takeaways
You should now:
* The importance of voltage dividers in analog inputs
* Understand how to read and process analog inputs

### Tutorial 5: Program Structure
### Tutorial 6: Advanced Program Structure
### Tutorial 7: Advanced Methods

