g = int(input())
a = []
counter = 0
for i in range(g):
    a.append(True)
p = int(input())
for i in range(p):
    dock = int(input())
    for k in range(dock, 0, -1):
        if a[k-1] == True:
            a[k-1] = False
            counter += 1
            break
        if k-1 == 0:
            print(counter)
            exit()
print(counter)
