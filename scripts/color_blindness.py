cases = int(input())
for i in range(0, cases):
    ammount = int(input())
    f = input()
    s = input()
    f2 = ""
    s2 = ""
    for i in range(0, ammount):
        if f[i] != "G":
            f2 += f[i]
        else:
            f2 += "B"
        if s[i] != "G":
            s2 += s[i]
        else:
            s2 += "B"
    if f2 == s2:
        print("YES")
    else:
        print("NO")