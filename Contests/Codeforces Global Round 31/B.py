t = int(input())

for _ in range(t):
    length = int(input())     
    arr = input().split()      
    s = ""
    for element in arr:
        if s == "":
            s = element
        else:
            if element + s < s + element:
                s = element + s
            else:
                s = s + element          
    print(s)


# 3
# 4
# amir rima amin nima
# 1
# codeforces
# 3
# a ab abc
