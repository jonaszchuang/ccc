s = input()
w = input()
ast = 0
if len(s) != len(w):
    print("N")
else:
    for i in range(len(s)):
        if w[i] == "*":
            ast += 1
        elif w[i] in s:
            s=s.replace(w[i], "", 1)
    if len(s) == ast:
        print("A")
    else:
        print("N")