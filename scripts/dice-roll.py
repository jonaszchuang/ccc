from random import random, randint 
dice = int(input("How many dice would you like to roll? "))
print("Your numbers are ", end='')
for i in range(0, dice):
    num = randint(0,6)
    if i < dice-1:
        print(num, ", ", end='')
    else:
        print("and ", num)
