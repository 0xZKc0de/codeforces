n = int(input())

arr = input().split()

arr = [int(i) for i in arr]

result = 0

for i in range(0, len(arr)):
    for j in range(0, i + 1):
        if sum(arr[j:i+1]) % n == 0:
            result += 1

print(result)