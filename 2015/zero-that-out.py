k = int(input())
a = []
for i in range(k):
    a.append(int(input()))
    if a[-1] == 0:
        del a[-1]
        del a[-1]
print(sum(a))