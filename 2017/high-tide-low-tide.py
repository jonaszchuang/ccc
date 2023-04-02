n = int(input())
a = input()
ar = a.split(" ")
for i in range(len(ar)):
    ar[i] = int(ar[i])
ar.sort()
s = ""
high = []
low = []
for i in range(n//2, n):
    high.append(ar[i])
for i in range(n//2):
    low.append(ar[i])
for i in range(len(high)):
    s += str(low[-i-1])
    s += " "
    s += str(high[i])
    s += " "
print(s)