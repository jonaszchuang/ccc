n = int(input())
a = [0, 0, 0, 0, 0]
for i in range(n):
    s = input()
    for i in range(5):
        if s[i] == "Y": 
            a[i]+=1
ar = []
for i in range(0, 5):
    if a[i] == max(a):
        ar.append(str(i+1))
print(','.join(ar))
