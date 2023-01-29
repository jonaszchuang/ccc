from datetime import datetime

yes = True
while yes == True:
    yes = False
    current = datetime.now()
    time = current.strftime("%H:%M:%S")
    print("Current Time: ", time)
    i = input("Do you want to know the current time? (yes or no) ")
    if i == "yes":
        yes = True
    else:
        break