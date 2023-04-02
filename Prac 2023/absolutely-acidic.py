import collections
n = int(input())
d = collections.defaultdict(int)
for i in range(n):
    d[int(input())] += 1
biggest = [key for key, value in d.items() if value == max(d.values())]
r = max(biggest)
r1 = min(biggest)
d.pop(r)
biggest = [key for key, value in d.items() if value == max(d.values())]
a1 = max(biggest)
a2 = min(biggest)
print(max(abs(a1-r1), abs(r-a2)))