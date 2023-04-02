import collections

def removeU(children, root, pho):
    if children[root] not in pho:
        pass
    else:
        return True







restuants = input()
pho = list(map(int, input().split(" ")))
count = 0
source = pho[0]
dest = pho[1]
a = collections.defaultdict(list)
queue = [source]
visted = set()
for i in range(int(restuants[0])-1):
    t = input()
    s = int(t[0])
    d = int(t[2])
    a[s].append(d)
    a[d].append(s)
while queue != []:
    if source == dest:
        break
    source = queue.pop(0)
    visted.add(source)
    count += 1
    for i in range(len(a[source])):
        if a[source][i] not in visted:
                queue.append(a[source][i])
print(count-1)
#     for path in a:
#         if source in pho:
#             del pho[pho.index(source)]
#         if source in path and len(path) == 2:
#             if path[0] == source:
#                 del path[0]
#             else:
#                 del path[1]
#             source = path[0]
#             count += 1
# print(count-2)