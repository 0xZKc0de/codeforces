def mex(array):
    l = max(array) + 1
    ls = set(array)
    for i in range(l+1):
        if i not in ls:
            return i


t = int(input())

for _ in range(t):
    arr = input().split()
    n = int(arr[0])
    k = int(arr[1])
    array = input().split()
    array = [int(element) for element in array]
    count_num = 0
    if mex(array) == k:
        print(count_num)
    else:
        if mex(array) > k:
            count_num += array.count(k)
            print(count_num)
        else:
            ls = set(array)
            count_min = 0
            for i in range(k):
                if i not in ls:
                    count_min += 1
            if count_min <= array.count(k):
                print(array.count(k))
            else:
                print(count_min)


# 5
# 1 0
# 0
# 3 1
# 0 2 3
# 5 5
# 0 1 2 3 4
# 6 2
# 0 3 4 2 6 2
# 7 4
# 0 1 5 4 4 7 3
