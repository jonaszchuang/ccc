n = int(input())
mountains = list(map(int, input().split(" ")))
r = []
t = 0
t2 = []
a = []
for i in range(1, n+1):
    for j in range(n):
        if j+i>n:
            break
        for k in range(i):
            a.append(mountains[k+j])
        for k in range(i):
            t += abs(a[k]-a[-k-1])
        t2.append(t)
        t = 0
        a = []
    print(t2)
    r.append(int(min(t2)/2))
    t2 = []
s = ""
for i in range(len(r)):
    s+=str(r[i])
    s+=" "
print(s)