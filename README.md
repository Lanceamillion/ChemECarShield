# ChemE Car Shield
Designed, manufactured, and taught by Lance Nichols this repository serves as a usage and quick startup guide for using the **ChemE Car Shield.** This shield attaches to an Arduino Uno and seeks to simplify and consolidate the electronics of a basic Chem-E Car.

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
4. Navigate to ChemECarShield>Examples>1_Hello World
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
4. Navigate to ChemECarShield>Examples>2_Blinky
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
4. Navigate to ChemECarShield>Examples>3_Switch
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
In this section you will learn how to read and record analog inputs. Analog inputs allow you to read much more than just a one or a zero; they allow you to detect the voltage applied to a particular pin. This can be very valuable for many analog sensors such as photoresistors and thermistors. In both cases the concept of a voltage divider is utilized. This divider essentially provides a reference resistance for the variable resistance of the photoresistor or thermistor to be compared against providing a variable voltage to be measured by an analog pin of the arduino. As you can see in the ChemE Car Shield pin table two pins (A0,A1) have already been attached to voltage dividing resistors. So that additional dividing resistors don't have to be utilized.

### Do it!
1. Plug the ChemECarShield to the arduino
2. Attaching the battery/turning on the battery switch is not necessary for this tutorial
3. Plug in the arduino into your computer
4. Navigate to ChemECarShield>Examples>4_Analog
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
 
For additional information on sensor selection and wiring see **Appendix A: Sensors and Wiring** and for a discussion of data collecton se **Appendix B: Sensor Calibration/Data Collection and Threshold Selection**.

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
4. Navigate to ChemECarShield>Examples>5_Structure
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
 
 **Problem 1** By adding a simple startup check not unlike the check that holds the program until the switch is flipped to activate the car we can prevent this problem

 **Problem 2** To shut the car off in the event that the threashold is not reached or some other circumstance such as the car crashing, going out of bounds, ect. we will add an addtional check when the car checks the analog threashold to see if the switch has been flipped back to its starting position.
 
The new program structure can be described in the following steps.
1. The vehicle turns on or is reset to the top of the code.
2. The system **waits** for the switch to be turned off.
   * While waiting blink red to let the user know the switch is not ready
3. The system **waits** for the switch to be turned on.
   * While waiting blink Orange to let the user know the switch is now ready
4. The car **uses** the relay to connect the start reaction to the motor(s).
   * The relay turns on
5. The system **waits** for the sensor on the stop reaction to reach a certain threshold **or** the switch is flipped.
   * While waiting blink green to show the car is operating
6. The system **uses** the relay to disconnect the start reaction from the motor(s).
   * The relay turns off
7. The system is now done with its run and is shutdown and needs to be restarted to run again.
   * Blink blue to show the car is done with its run
These discrete steps can be easily mapped to instructions in code.

### Do it!
1. Plug the ChemECarShield to the arduino
2. Attaching the battery/turning on the battery switch is not necessary for this tutorial
3. Plug in the arduino into your computer
4. Navigate to ChemECarShield>Examples>6_Advanced_Structure
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
* Understand how problems can be solved utilizing linear program structures.

# Tutorial 7: Advanced Methods
### Purpose
This tutorial covers advanced methods that can be utilized to increase reliability, usability and flashiness of your system. This tutorial will be unlike the previous tutorial as there won't be specific instructions. This tutorial will have a section of discussion on the topic then you can examine and run the example code associated with that feature. These methods are not required to implement a successful system. So for some teams this section may not be necessary however if you want to go one step further here are some good features and methods you can add.

## 7.1: Advanced Startup Sequence
Begining your program with an advanced startup sequence can provide several benifits.
1. A basic check to make sure the LED is working by blinking through the red green and blue chanels. When you boot the device look at the led to make sure it through blinked the colors if it failed to blink one of the colors you will know that color is out and you wont be able to see any status associated with that color.
2. A check of the Relay briefly clicks the relay on and off. This provides two benefits, one by listening for the relay click you can identify that the relay is operational and will work in your run. Two, this brief closing of the relay will connect your start reaction to the motors. This connection will cause the motors to jump forward, this verifies that your start reaction is wired correctly (and there are no breaks in the wire) and the car will move in the correct direction.'
3. A simple check of the stop reaction sensor to make sure when the vehicle starts it doesn't immediately stop. This check can usually be performed in some capacity but will depend on the application of your sensor.
4. Ensure the switch is in the desired position at startup so the car does not begin moving when first booted. This failsafe was discussed and demonstrated in the previous tutorial.
 
See ChemECarShield>Examples>7_1 Advanced_Startup_Sequence for a startup sequence that has all of these features.

## 7.2: LED Dimming Through PWM
As demonstrated in earlier tutorials the red, green, and blue led channels can be turned on and off and even mixed to create more colors. These three channels can also be individually dimmed allowing you to create almost any color. The function used to do this is called analogWrite().
 
See ChemECarShield>Examples>7_2_Dimming for a demonstration of this feature.

# Tutorial Conclusion
Congratulations on completing this tutorial you should be ready to create your own program! Feel free to mix and match these sections to fit your application.
 
Word of advice: If your program ever breaks don't give up, be persistent , look at the error message and work back from there (often you may need to scroll up). Good programers make mistakes too; they have just learned to be faster at figuring out the bugs.

# Appendix A: Sensors and Wiring
Selecting a suitable sensor should be directly related to your selection of a stop reaction. Reading from the 2022 Chem-E-Car Official Rules we see that the car "*must be stopped by a quantifiable change ... of the concentration of a chemical species.*" From this we see that our sensor must be able to detect a change in concentration of a given solution. There are several common ways to do this.
1. **Photoresistors** - Photoresistors are easily the easiest sensor to work with. Photoresistors change their resistance with different light levels and can be connected directly from 5V to eaither A0 or A1 (since they have pulldowns attached). They require the solution to change in opacity such as an Iodine clock reaction or create its own light as in a luminol reaction. In both cases it is important to shield the reaction and sensor from outside light such that external lighting conditions can't affect the value read. In the case of the iodine clock a light source such as an LED would be required in the dark environment so the opacity may be measured. An LED may be directly connected from the 5V pin to the pin labeled LED on the ChemE Car shield. This light source would be placed on the other side of the container from the sensor so light can be blocked as the concentration changes.
2. **Pressure Sensors** - While pressurized containers create lots of complexity with the design of their vessels a stop reaction utilizing a pressure sensor would be easy to interface with. This is not a guide on how to build such a stop reaction but some things to consider are how you will start the stop reaction if the vessel is enclosed. What kind of sensor you are using differential or absolute and if the sensor is analog or digital.
3. **Gas Sensors** - Some sensors can be placed into a chamber or outlet and monitor qualities of the gas concentration. What these sensors measure varies; try an online search for "Arduino gas sensor." When making a selection keep in mind what type of signal output is being provided. If the output is analog then powering the device and connecting it to A2 or A3 would allow usage as has already been described earlier in this tutorial. If the output is digital be wary if it is a threshold device you will not be able to tune it to a specific value and will require much more work on the chemistry side as the threshold cannot be tuned in software. If the device uses I2C or Serial (using a library specific to the device) a connection can be made and the sensor values can be read and compared to your threshold in a similar way.

There are likely some other good options out there do keep in mind the cost and performance of those other sensors when making your decision.

# Appendix B: Sensor Calibration/Data Collection and Threshold Selection
With an appropriate sensor selected data collection is the next step. Ensure that your data collection setup is just as it would be on the car (you may just want to collect data while it is on the car). Run data collection on a wide range of concentrations since that is ultimately what you are going to need to change on competition day. To do the data collection you can use the simple script in "ChemECarShield>Examples>ApendixB_Data_Collection" or make your own. Upload the program and open the serial monitor. Just before you start your reaction clear the serial monitor. When the collection window is complete ctrl+a ctrl+c the data from the window and paste it into your prefered spreadsheet software. From here you can graph and analyze the value of your sensor. 

If you use analogRead() you may get the question from your colleague "What is that number? Is it Photons? Pascals? Apms?" The real answer to this question is a little long but in short you can just think of the analogRead() value as a unitless value that represents how bright or how much pressure there is. The long answer is the arduino has a component inside of it called an analog digital converter (ADC). This converter takes the analog value on a given pin A0-A5 and measures the voltage. It takes that voltage and converts it to an unsigned (it isn't negative) 10 bit binary number. The minimum being 0 and the max value of such a number being 2^10-1 = 1023. The range of voltages possible being 0V to 5V. This number can then be mapped back to a voltage with the following formula 5V*(analogRead(pin)/1023). And since your sensor didn’t even measure volts to begin with this new number has just as little meaning as the last. Quite an unsatisfying answer huh?

For the purpose of ChemE Car it is not necessary to calibrate this value that comes from your sensor to the value it is actually reading. Instead it is more useful to take this data you have recorded at a specific concentration of reactants and compare its behavior over time to other concentrations. Using the estimated speed of the vehicle, calculate the required time window for your stop reactions. From your initial test set select several concentrations that result in either “events” as with the iodine clock that cover this time or have good slope at these desired times as with the luminol reaction. These concentrations can be looked at in further detail with more testing including repeating the same concentration to ensure you have repeatability in your process.

Selecting the threshold an iodine clock reaction should be very easy to pick just somewhere in the middle of the sudden transition. The luminol type reaction threshold will have to be drawn at some point in the tapering of the light transmission, pick a value that works well with your data set and stick with it. 
 
Use these new datasets along with the speed of the vehicle to create a figure relating distance to concentration. This figure can now be used on competition day.
