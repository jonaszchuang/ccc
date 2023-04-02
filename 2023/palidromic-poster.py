values = input().split(" ")
rows = int(values[2])
columns = int(values[3])
if rows == 2 and columns == 2:
    print("aa")
    print("aa")
elif rows == 0 and columns == 2:
    print("ab")
    print("ab")
elif rows == 2 and columns == 0:
    print("aa")
    print("bb")
elif rows == 1 and columns == 1:
    print("ba")
    print("bb")
elif rows == 0 and columns == 0:
    print("ab")
    print("cd")
else:
    print("IMPOSSIBLE")