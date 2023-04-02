n=int(input())
c = 0
for i in range(6):
    for j in range(i, 6):
        if i+j == n:
            c += 1
print(c)