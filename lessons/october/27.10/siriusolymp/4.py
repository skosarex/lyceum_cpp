N = int(input())
seq = input()

result = []
for i in range(N):
    start = i
    end = (start + N)
    if end != N:
        end %= N
    if start < end:
        current_seq = seq[start:end]
    else:
        current_seq = seq[start:] + seq[0:end]
    if current_seq == current_seq[::-1]:
        result.append(end)
print(len(result))
for elem in result:
    print(elem)
