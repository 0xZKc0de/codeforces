arr = input().split()

m = int(arr[0])
n = int(arr[1])

if m % 2 == 0:
    print(int((m/2) * n))
else :
    if n%2 == 0:
        print(int((n/2) * m))
        
    else:
        result = (max(m, n) -1)/2 * min(m,n) + int(min(m, n) / 2)
        print(int(result))