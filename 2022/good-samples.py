inp = list(map(int, input().split(" ")))
a = []
c = 0
n = inp[0]
m = inp[1]
i = 0
t = 0
while len(a)<n:
    i += 1
    if i <= m and i+c < inp[2]:
        a.append(i)
        c += i
    else:
        for j in range(i+1):
            if i <= m and i-j+c == inp[2]:
                t = a.index(i-j)
                a.append(i-j)
                c += len(a)-t
                i = i-j
if c < inp[2]:
    print("-1")
else:
    st = " ".join(map(str, a))
    print(st)