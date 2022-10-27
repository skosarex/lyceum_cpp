A = int(input())
B = int(input())
C = int(input())
K = int(input())

counter = 1
for i in range(1, A + 1):
    kv = [counter, counter + 1, counter + 2]
    counter += 3
    if K == i:
        for elem in kv:
            print(elem)

for i in range(1, B + 1):
    kv = [counter, counter + 1, counter + 2]
    counter += 3
    if K == i:
        for elem in kv:
            print(elem)

for i in range(1, C + 1):
    kv = [counter, counter + 1, counter + 2]
    counter += 3
    if K == i:
        for elem in kv:
            print(elem)
