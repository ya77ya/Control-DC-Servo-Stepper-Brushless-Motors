# Servo-Stepper-Brushless-Motors
Control the Servo, Stepper, and Brushless Motors

## Control-Servo-Motor
Control servo motor up to 16 motors by using PCA9685 Module PWM

### Control 3 servo motors by one Arduino UNO
When control 3 motors by one Arduino UNO connect the signal wires to digital PWM (Pulse Width Modulation) pins which mark by ~

![Animation](https://user-images.githubusercontent.com/90250848/186367362-09f97a7f-d73f-4591-a819-dad007161e11.gif)

### Control up to 16 servo motors by one Arduino UNO
In case want to control up to 16 motors in one Arduino. Must connect with PCA9685 module which offers up to 16 channels of PWM pins

In this animation, the servo increases 10 degrees incrementally for each servo motor

![Animation](https://user-images.githubusercontent.com/90250848/186368902-76edc9ac-f156-43dd-af79-fd575b998f85.gif)


## Control-Stepper-Motor
Control the speed of stepper motor by potentiometer 

Control the speed of the stepper motor by the potentiometer in a clockwise, anticlockwise direction and stop the motor by pushing the push button. Also, the LCD shows the percentage of the motor speed

![Stepper Motor](https://user-images.githubusercontent.com/90250848/186373484-89ff0942-b793-42df-8438-5b209f65f544.gif)


## Control-Brushless-Motor
Control the speed of Brushless Motor

### Brushless Motor
Brushless Motor is one type of Dc Motor it is called BLDC motor and it is used in many applications such as Drone and electrical scooters As well as some electric bikes

![brushless_motor_GIF](https://user-images.githubusercontent.com/90250848/186409800-659f0ab7-d36e-483e-ad5f-b8cb9fec520c.gif)

This is Brushless Motor with 12 poles as we can see above in Figure each pole means an inductor in the picture we have 3 color that’s mean we have three inductors let these three inductors A, B, and C

As we can see, it is surrounded by magnetic and divided into North (N) and south (s). These poles attract and repel so that the Brushless Motor can move in a circular motion.

#### ESC
ESC is Electronic Speed control. It consists of 6 transistors used to change the speed of an electric motor and its route and perform as a dynamic brake. These are frequently used on radio-controlled models which are electrically powered, with the change most frequently used for brushless motors providing an electronically produced 3-phase electric power low voltage source of energy for the motor.

![ESC](https://user-images.githubusercontent.com/90250848/186411079-d0394ea5-d66c-40f0-a742-5e7559eb04ba.jpg)

![ESC dirction](https://user-images.githubusercontent.com/90250848/186411172-e6f106b6-0191-4586-ae46-2b245da082c6.jpeg)

![brushless](https://user-images.githubusercontent.com/90250848/186413276-65a20bcd-f64e-4f01-a1ca-cfc4d6ffd6c3.PNG)

A2212/13T
1000KV

22mm: Diameter (width)

12mm: Hight

13T: The number of turns of the inductor

1000KV: Number of turns for each voltage. That means 1000 turns for each voltage


### Control the Brushless Motor

![Circuit](https://user-images.githubusercontent.com/90250848/186416554-5c0b58fa-704d-4c4c-92c6-8b17488ed896.PNG)


