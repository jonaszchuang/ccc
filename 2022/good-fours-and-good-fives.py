n = int(input())
re = 0
f = 0
count = 0
for i in range(n):
    f = i*5
    re = n - f
    if re >= 0 and re % 4 == 0:
        count += 1
print(count)