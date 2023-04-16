a = int(input())
b = int(input())
s = []
c = []
co = 0
for i in range(int((a**(1/6))), int(((b+1)**(1/6)))+1):
    s.append(i**6)
for i in range(a, b):
    if i in s:
        co+=1
print(co)
