# This program takes in words and turns it into an acronym

coun = False
while coun == False:
    words = input("How many words make up the acronym? ")
    if type(words) is int == True:
        coun = True
acronym = ""
for i in range(0, words):
    i += 1
    i = str(i)
    x = input("Whats the " + i + " word? ")
    x.upper()
    acronym += x[0]
    i = int(i)
print(acronym)

# Problems
# 1. No error checking
# 2. I can enter negative numbers ??????
# 3. I can enter numbers???????
# 4. You're missing an apostrophe
# 6. BONUS: Change 1 -> 1st, 2 -> 2nd, 3 -> 3rd (hint: use dictionary (the python one not the real one) and keys (the python one not the real one)) {[1, "st"], [2, "nd"]}
