import numbers


t = int(input())
idk = True
p = []
a = []
for i in range(t):
    number = int(input())
#prime cheaker
    for num in range(2, (number*2) + 1):
        for i in range(2, num):
           if (num % i) == 0:
               break
        else:
            p.append(num)
#find 2 prime
    for b in range(len(p)):
        for c in range(len(p)):
            if b+c == number*2:
                a.append([b, c])
                idk = False
                break
        if idk == False:
            idk = True
            break
#print
for i in range(len(a)):
    print(a[i][0], a[i][1])
