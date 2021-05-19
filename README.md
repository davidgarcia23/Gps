
This GPS is a project made with the intention of making a final project in which we talk about the CAN Bus, a technology widely used these days which we consider that serves to acquire a very practical and useful knowledge for future employment.

The objective of this program is to be able to have the software developed to be able to make a practical application in the GPS L80 module where we will be able to verify the correct operation of the same one.

The software that we are going to use consists of two parts, the program that installed and executed will make the commands / orders that we program it to do. The other part is the library, which is responsible for the commands that we use in the GPS program, the device itself understands them as this built to do things based on the commands you need and that process needs a translation, and this is responsible for the library, in which we tell him that we want to do depending on the order that comes to him.\\

In this case, let's first talk about the C program.

The objective is to make a code which receives two points and tells me in function of the first one, the direction in which it has moved until it reaches the second one.
For this the program receives two inputs, which are the two points, which have two coordinates each.
In the program, the two coordinates are used to form a vector, using the vector product and with the help of mathematics we can easily calculate the angle between two vectors and compare it with the X-axis to have all the results in function of it.

The results obtained are the angle that is closer to the axis being always less than 180, to solve this problem and get a result between 0 and 360 we have to take the complementary to have a result in the range we want. 
Also, to avoid coding errors, we have added the exception that the end point is the same as the initial, and in that case the angle obtained is 0.
