var = input()
place = 0
o = 1
t = 2
th = 3
f = 4
for i in range(len(var)):
    if var[i] == "H":
        place = o
        o = th
        th = place
        place = t
        t = f
        f = place
    else:
        place = o
        o = t
        t = place
        place = th
        th = f
        f = place
print(o, t)
print(th, f)
