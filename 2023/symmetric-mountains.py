n = int(input())
mountains = list(map(int, input().split(" ")))
difference = []
print(0, end=' ')
for i in range(n):
    difference.append([])
    for j in range(n):
        difference[i].append(0)
for window in range(2, n+1):
    min_crop = float('inf')
    l = 0
    r = window-1
    while r < n:
        difference[l][r] = abs(mountains[l]-mountains[r])+ difference[l+1][r-1]
        min_crop = min(difference[l][r], min_crop)
        l += 1
        r += 1
    print(min_crop, end=' ')