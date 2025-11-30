arr = []

for i in range(5):
    
    arr.append(input().split())


x, y = 0, 0

for i in range(5):
    for j in range(5):
        if arr[i][j] == '1':
            x, y = int(i), int(j)

result = abs(x - 2) + abs(y - 2)

print(result)