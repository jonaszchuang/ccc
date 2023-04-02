q = int(input())
n = int(input())
d = list(map(int, input().split()))
p = list(map(int, input().split()))
d.sort()
p.sort()
total = 0
if q == 1:
    for i in range(n):
        total += max(d[i], p[i])
else:
    for i in range(n):
        total += max(d[i], p[n - i - 1])
print(total)