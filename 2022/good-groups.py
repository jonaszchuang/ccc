same = int(input())
s = []
violations = 0
for i in range(same):
    s.append(input().split(" "))
diff = int(input())
d = []
for i in range(diff):
    d.append(input().split(" "))
pair = int(input)
p = []
for i in range(pair):
    p.append(input().split(" "))
    for j in range(len(s)):
        if s[j][0] not in p[i] and s[j][1] in p[i]:
            violations += 1
    for j in range(len(d)):
        if d[j][0] in p[i] and d[j][1] in p[i]:
            violations+=1
print(violations)