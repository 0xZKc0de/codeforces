t = int(input())

for _ in range(t):
    arr = input().split()
    l = int(arr[0])
    a = int(arr[1])
    b = int(arr[2])
    
    ls = set()
    while a not in ls:
        ls.add(a)
        a = (a + b) % l
    
    print(max(ls))