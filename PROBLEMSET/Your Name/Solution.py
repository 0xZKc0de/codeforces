from collections import Counter
t = int(input())

for _ in range(t):
    n = int(input())
    arr = input().split()
    
    lf = Counter(arr[0])
    ls = Counter(arr[1])
    print("YES" if ls == lf else "NO")