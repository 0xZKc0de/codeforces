t = int(input())
for _ in range(t):
    n = int(input())
    arr = []
    for i in range(2, n):
        if n % i == 0:
            arr.append(i)
            n = n // i
            i = 2
    if len(arr) == 3:
        print(arr[0], arr[1], arr[2])
        print("YES")
    else:
        print("NO")