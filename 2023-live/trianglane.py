t = int(input())
lane = list(map(int, input().split(" ")))
lane2 = list(map(int, input().split(" ")))
tape = 0
for i in range(t):
    if lane[i] == 1:
        tape += 3
    if lane2[i] == 1:
        tape += 3
    row1 = lane[i]
    row2 = lane2[i]
    check1 = i
    check2 = i + 1
    check3 = i - 1
    if row1 == 1:
        if i % 2 == 0 and lane2[check1] == 1:
            tape -= 1
        if i != t - 1 and lane[check2] == 1:
            tape -= 1
        if i != 0 and lane[check3] == 1:
            tape -= 1
    if row2 == 1:
        if i % 2 == 0 and lane[check1] == 1:
            tape -= 1
        if i != t - 1 and lane2[check2] == 1:
            tape -= 1
        if i != 0 and lane2[check3] == 1:
            tape -= 1
print(tape)