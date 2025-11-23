from collections import Counter

n_test = int(input())
result = 0
for _ in range(n_test):
    length = int(input())
    arr = input().split()
    int_arr = [int(x) for x in arr]
    ldict = Counter(int_arr)
    for key, value in ldict.items():
        if key < value:
            result = result + value - key
        elif key > value:
            result += value
    print(result)
    result = 0
            

# 4
# 3
# 1 2 2
# 5
# 1 1 2 2 3
# 10
# 1 2 3 2 4 4 4 4 5 2
# 1
# 0

# Output:
# 0
# 2
# 3
# 1