t = int(input())

for _ in range(t):
    arr = input().split()
    n = int(arr[0])
    k = int(arr[1])

    if k == 1:
        print(n)
    if k == 2:
        print(0, n)
    if k % 2 == 1 and k > 1:
        for _ in range(k):
            print(n, end = " ")
        print()
    if k % 2 == 0 and k > 2:
        print(0, n, end = " ")
        for _ in range(k-2):
            print(n, end=" ")
        print()




# input
# 4
# 5 4
# 4 3
# 8 2
# 1 1



# Output
# 1 4 5 5
# 4 4 4
# 0 8
# 1
