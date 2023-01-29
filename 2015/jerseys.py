j = int(input())
a = int(input())
arr = []
counter = 0
for i in range(j):
    arr.append(input())
for i in range(a):
    s = input()
    if arr[int(s[-1])-1] != "taken" and s[0] == "L":
        if arr[int(s[-1])-1] == "L":
            counter += 1
            arr[int(s[-1])-1] = "taken"
    elif s[0] == "M" and arr[int(s[-1])-1] != "taken":
        if arr[int(s[-1])-1] == "L" or arr[int(s[-1])-1] == "M":
            counter += 1
            arr[int(s[-1])-1] = "taken"
    elif s[0] == "S" and arr[int(s[-1])-1] != "taken":
        counter += 1
        arr[int(s[-1])-1] = "taken"
    
print(counter)
