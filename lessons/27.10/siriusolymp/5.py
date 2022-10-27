n = int(input())
m = int(input())
numbers = []
for i in range(n):
    numbers.append(int(input()))
current_num = 0
for i in range(m):
    current_num = numbers[0]
    numbers.remove(current_num)
    for j in range(current_num):
        numbers.append(current_num)
print(current_num)
