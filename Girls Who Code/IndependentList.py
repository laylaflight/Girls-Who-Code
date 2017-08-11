
from random import *
from time import sleep
from os import system

print("this gives you a first, middle and last name...")
sleep(3)
system("cls")
#Create the list of words you want to choose from.
word_list = ['Melissa','Christina','Sam','Roger','Paige']
lastname_list = ['Johnson','Williams','Stewart','Slater','Taylor']
#Generates a random integer.
x = randint(0, len(word_list)-1)
print(word_list[0])

#wordListLen = len(word_list)


print("Random Number:"+ str(x))
print(word_list[x])


print("Random Number:" + str(x))
print(lastname_list[x])
