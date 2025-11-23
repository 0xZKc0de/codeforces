import math
n = int(input())

for _ in range(n):
    number = int(input())
    arr = input().split()
    for i in range(2, math.pow(10,18) + 1):
        for j in range(number):
            if math.gcd(i, int(arr[j])) == 1:
                break
    
    print(i if i != math.pow(10,18) else -1)
        
        
            