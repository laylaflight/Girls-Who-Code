from turtle import *
import math

# Bob
t = Turtle()

# Set Up your screen and starting position.



### Write your code below
 # for loop
'''pendown()

sides = 4

for sides in range (4):
     print(sides)
     forward(50)
     right(90)



   * while loop
sides = 4
maxSides = 10
stepSize = 50

while sides != maxSides:
    print(sides)
    pendown()
    forward (stepSize)
    right (degrees)
    sides += 1 '''





#function

sides = 4
stepSize = 50

def drawShape(sides):
    pendown()
    for _ in range(sides):
        forward(stepSize)
        degrees= 360 / sides
        right(degrees)
drawShape(sides)







exitonclick()
