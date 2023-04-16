n = int(input())
first = input().split()
second = input().split()
b = True
for i in range(n):
    if first[i] == second[i] or first.index(second[i]) != second.index(first[i]):
        b= False
if b == True:
    print("good")
else:
    print("bad")