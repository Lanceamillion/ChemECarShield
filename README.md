# ChemE Car Shield
Designed, manufactured and taught by Lance Nichols this repository serves as a usage and quick startup guide for using the **ChemE Car Shield.** This shield attaches to an Arduino and seeks simplify and consolidate the electronics of a basic Chem-E Car.

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
If you already know what you are doing here are the pins that are used. If you don't understand what this means, continue with the tutorial.

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

# Tutorials
These tutorials seek to bring familiarity with these basic digital electronics in the context of ChemE Car. Here you will learn just as much or as little as you need to make your car work and your team succeed.

### Download the software
To begin you will need to install the Arduino IDE (Integrated Development Environment) software on your computer. The download link can be found at [arduino.cc/en/software](https://www.arduino.cc/en/software).

### Downloading the repository
1. To download this repository navigate to 
[github.com/Lanceamillion/ChemECarShield](https://github.com/Lanceamillion/ChemECarShield) 
(you may already be here)
2. In the top right Code>Download ZIP
3. Extract the .zip to a convenient location (Maybe your desktop or documents folder)
4. Done!

# Tutorial 1: Your first Program "Hello World"
### Purpose
In this section you will learn how to output text/data to your computer. Utilizing this communication is important to understand so that you can gather data from your sensors on the car and incorporate that data into your final program. We will talk more about this specifically how to gather data in future tutorials but for now we are going to address the basics of printing to the serial terminal.

### Do it!
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

### Going further for better understanding
Try changing the message in the code and uploading it.

### Takeaways
You should now:
* Understand the need to output information to the serial monitor
* Understand how to output status and data to your computer

## Notes on the C++ language
As you begin to write your own code keep in mind these rules of the C++ language
* All lines of code must end in a semicolon (;)
* Comments begin with // while block comments begin with /* and end */
* Variables along with their type must be defined before their usage
* **if** statements, **while** loops, **fuctions()**, ect. are contained by {}
There are many more details about this language that I wont go into here but you have a more expansive question check the [Arduino Referance](https://www.arduino.cc/reference/en/?_gl=1*1pqet4u*_ga*MjEzMjE5Mjk5My4xNjM1NTYxODc0*_ga_NEXN8H46L5*MTY0NDgyMTgwMS4xMS4xLjE2NDQ4MjE4MDIuMA..) or do an online search for "<your problem> arduino"

# Tutorial 2: Digital Outputs
### Purpose
In this section you will learn how to use digital outputs to display information to the user and control digital systems. Digital outputs can fulfill various functions for example indicator LED and relay.

### Do it!
1. Plug the ChemECarShield to the arduino
2. Attaching the battery/turning on the battery switch is not necessary for this tutorial
3. Plug in the arduino into your computer
4. Navigate to ChemECarShield>Examples>2 Blinky
5. Look over the code and read the comments such that you are familiar with what is happening
6. Upload the code (If you don't remember how to do this look back to tutorial 1)
7. Observe the red led blinking on 1 second off 1 second

### Going further for better understanding
* Try changing the code so the led blinks twice as fast
* Try changing the code so that the led blinks green you will need to look up what pin the green LED is on in the table at the top
* Try changing the code so the relay turns on and off instead of the LED. The relay is on pin 2. When you bring the pin HIGH it will connect the terminals on the terminal block together (see the board overview image to identify the terminal block). If the pin is brought LOW or the arduino doesn't have power the relay will be open (not on).
* Try changing the code so the led blinks red>green>red>green

### Takeaways
You should now:
* Understand how to set the state of digital outputs
* Understand how to use the delay function
* Understand how to find pin numbers on the pin diagram

# Tutorial 3: Digital Inputs
### Purpose
In this section you will learn how to use digital Inputs allowing you to read basic user inputs and feedback. The concept of a pullup resistor is utilized; this resistor ensures that the input pin of the arduino is connected to a reference voltage at all times and when the switch is in both positions. When the switch is “closed” it is then connected to ground which drives the voltage of the pin to the low state. The Arduino uno has so called internal pullup resistors meaning there isn't a physical resistor on the board but rather one is activated inside the arduino’s microcontroller. These specifics aren’t important to understand but keep in mind that pullup resistors are necessary for many digital inputs such as switches and buttons.

### Do it!
1. Plug the ChemECarShield to the arduino
2. Attaching the battery/turning on the battery switch is not necessary for this tutorial
3. Plug in the arduino into your computer
4. Navigate to ChemECarShield>Examples>3 Switch
5. Look over the code and read the comments such that you are familiar with what is happening
6. Upload the code
7. Open the serial monitor
8. Flip the switch on the shield and observe the output

### Going further for better understanding
* Change the code to use the relay instead of the LED
* Change the code so the switch works in the opposite position

### Takeaways
You should now:
* The importance of pullup resistors in digital inputs
* Understand how to read and process digital inputs

# Tutorial 4: Analog Inputs
### Purpose
In this section you will learn how to read and record analog inputs. Analog inputs allow you to read much more than just a one or a zero; they allow you to detect the voltage applied to a particular pin. This can be very valuable for many analog sensors such as photoresistors and thermistors. In both cases the concept of a voltage divider is utilized. This divider essentially provides a reference resistance for the variable resistance of the photoresistor or thermistor to be compared against providing a variable voltage to be measured by an analog pin of the arduino. As you can see in the ChemE Car Shield pin table two pins (A0,A1) have already been attached to voltage dividing resistors. So that additional dividing resistors don't have to be utilized. For additional information on sensor selection and wiring see **Appendix A: Sensors and Wiring.**

### Do it!
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

### Going further for better understanding
* Change the threshold of the LED trigger

### Takeaways
You should now:
* The importance of voltage dividers in analog inputs
* Understand how to read and process analog inputs

# Tutorial 5: Program Structure
### Purpose
The concept of program structure is an expansive topic however within the context of ChemE Car the level of complexity required is program structure is limited. Program structure will be the glue that will hold all of the basic building blocks you have learned so far together. Basic program structure begins with the two basic sections of an Arduino program setup() and loop().

**setup()** - This section of code only runs once and begins when the Arduino boots. The Arduino boots after one of three events: code is uploaded, power is turned to the device, or the reset button is pressed. While this section of code begins when the Arduino boots this does not necessarily mean that it must end just after the device boots. To further simplify the program structure and given the linear nature of ChemE Car programs we will be leveraging this fact.

**loop()** - This section of code runs over and over and is useful for making a simple main loop in your program. We have been using this function to make things happen over and over in our previous programs. Once again since the code that will run on the car doesn't need to be continuously looped we will largely be leaving this section blank. One way to think about it is this is where the program will go once the car is done with its run.

For a simple car generating electric power with its start reaction, the program structure can be described in the following steps.
1. The vehicle turns on or is reset to the top of the code.
2. The system **waits** for user or sensor input to know the run has started.
3. The car **uses** the relay to connect the start reaction to the motor(s).
4. The system **waits** for the sensor on the stop reaction to reach a certain threshold.
5. The system **uses** the relay to disconnect the start reaction from the motor(s).
6. The system is now done with its run and is shutdown and needs to be restarted to run again.
These discrete steps can be easily mapped to instructions in code.

### Do it!
1. Plug the ChemECarShield to the arduino
2. Attaching the battery/turning on the battery switch is not necessary for this tutorial
3. Plug in the arduino into your computer
4. Navigate to ChemECarShield>Examples>5 Structure
5. **Look over the code and read the comments so you can see how the steps above have been mapped into code**
6. Upload the code
7. Flip the switch and observe what happens. Notice that the switch may have already been flipped when the car was booted. This is an important observation and a solution will be covered in *Tutorial 6: Advanced Program Structure*
8. Short the A0 contact as was done in *Tutorial 4*. Observe what happens.
9. Try pressing the reset button and going back to steps 7-8. Try pressing the reset button at different stages in the program and seeing the result. Once again as discussed in step 7 the switch may already be flipped when the code boots so the code may instantly go past that section.

### Going further for better understanding
* Modify the code such that the LED blinks at different rates in different parts of the program 

### Takeaways
You should now:
* Understand the process of turning non code instructions into code blocks.
* Understand the building blocks of basic linear systems.
* Understand some of the problems with the most basic of linear program structures.

# Tutorial 6: Advanced Program Structure
### Purpose
This tutorial on advanced program structure seeks to solve two problems. 
 1. As demonstrated in the previous tutorial problems can arise when the user starts the boot with the switch in the wrong place.
 2. The car doesn't have an emergency shutoff procedure.
 
 **Problem 1**

 **Problem 2**
 
The new program structure can be described in the following steps.
1. The vehicle turns on or is reset to the top of the code.
2. The system **waits** for the switch to be turned off.
   * While waiting blink red to let the user know the switch is not ready
2. The system **waits** for the switch to be turned on.
   * While waiting blink Orange to let the user know the switch is now ready
3. The car **uses** the relay to connect the start reaction to the motor(s).
   * The relay turns on
4. The system **waits** for the sensor on the stop reaction to reach a certain threshold **or** the switch is flipped.
   * While waiting blink green to show the car is operating
5. The system **uses** the relay to disconnect the start reaction from the motor(s).
   * The relay turns off
6. The system is now done with its run and is shutdown and needs to be restarted to run again.
   * Blink blue to show the car is done with its run
These discrete steps can be easily mapped to instructions in code.

### Do it!
1. Plug the ChemECarShield to the arduino
2. Attaching the battery/turning on the battery switch is not necessary for this tutorial
3. Plug in the arduino into your computer
4. Navigate to ChemECarShield>Examples>5 Structure
5. **Look over the code and read the comments so you can see how the steps above have been mapped into code**
6. Upload the code
7. Play with the system in your hands and observe what happens. Make sure to try these things and look at the program structure diagram or the code as you do it.
   * Flip the switch
   * Reset the program
   * Short A0

### Takeaways
You should now:
* Reinforce the understanding of the process of turning non code instructions into code blocks.
* Reinforce the understanding of the building blocks of basic linear systems.
* Understand how problems can be solved utilizing linear program structures

# Tutorial 7: Advanced Methods
### Purpose
This tutorial covers advanced methods that can be utilized to increase reliability, usability and flashiness of your system. This tutorial will be unlike the previous tutorial as there won't be specific instructions. This tutorial will have a section of discussion on the topic then you can examine and run the example code associated with that feature. These methods are not required to implement a successful system. So for some teams this section may not be necessary however if you want to go one step further here are some good features and methods you can add.

## 7.2: Startup Sequence

## 7.1: LED Dimming Through PWM

# Tutorial Conclusion
  Congratulations on completing this tutorial you should be ready to create your own program!

# Appendix A: Sensors and Wiring

# Appendix B: Sensor Calibration/Data Collection and Threshold Selection
