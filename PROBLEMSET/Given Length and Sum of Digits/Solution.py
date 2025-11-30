import math

arr = input().split()

n = int(arr[0])
s = int(arr[1])

if n == 1 and s == 0:
    print(0, 0)
else:
    first = int(math.pow(10, n - 1))
    last =  int(math.pow(10, n))

    result = [last, first]
    for i in range(first, last):
        lst = list(str(i))
        lst = [int(element) for element in lst]
        if sum(lst) == s:
            result[0] = min(i, result[0])
            result[1] = max(i, result[1])

    if result[0] != last and result[1] != first:
        print(result[0], result[1])
    else:
        print(-1, -1)
            
