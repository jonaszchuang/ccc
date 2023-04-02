n = int(input())
s1 = input()
s2 = input()
s1 = list(map(int, s1.split(" ")))
s2 = list(map(int, s2.split(" ")))
co = 0
co2 = 0
c = 0
for i in range(n):
    co += s1[i]
    co2 += s2[i]
    if co == co2:
        c = i+1
print(c)