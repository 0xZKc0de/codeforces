n_test = int(input())
for _ in range(n_test):

    n, x, y = map(int, input().split())
    s = input().strip()
    arr = [(0, 0)]
    eight = s.count('8')
    four = len(s) - eight
    x = x - eight
    y = y - eight
    if x <= 0 and y <= 0:
        print("YES")
    else :
        rest = x + y
        if four >= rest:
            print("YES")
        else:
            print("NO")





# InputCopy
# 6
# 3 3 3
# 888
# YES
# 4 5 1
# 4884
# NO
# 4 3 -3
# 4884
# YES
# 7 -7 -5
# 4884884
# NO
# 10 0 0
# 4884884888
# 1 1 1
# 4
# OutputCopy
# YES
# NO
# YES
# NO
# YES
# NO


# Time Limit Exceeded, this solution did not pass all the test cases.