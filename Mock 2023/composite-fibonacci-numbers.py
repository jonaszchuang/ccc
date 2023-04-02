import math
n = int(input())
c1 = 0
c2 = 1
c3 = 1
f = False
c = False
a = [1, 1]
for i in range(n):
    inp = int(input())
    if inp in a:
        f = True
    else:
        while a[-1] < inp:
            a.append(a[-1]+a[-2])
            if a[-1] == inp:
                f = True
                break
    for k in range(2, int(math.sqrt(inp))+1):
        if inp%k== 0:
            c = True
            break
    if c == True and f == True:
        print("YES")
    else:
        print("NO")
    c1, c2, c3, = 0, 1, 1
    c, f = False, False