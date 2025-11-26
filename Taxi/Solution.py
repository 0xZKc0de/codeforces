from collections import Counter
n = int(input())
result = 0
arr = input().split()

ld = Counter(arr)

#ld = dict(ld)
ones = ld["1"]
twos = ld["2"]
trees = ld["3"]
fours = ld["4"]

result += fours
result += trees

ones -= trees
ones = max(0, ones)
result += twos // 2
if twos % 2 != 0:
    result += 1
    ones -=2
    ones = max(0, ones)
if ones != 0:
    if ones % 4 == 0:
        result += ones // 4
    else:
        result += (ones // 4) + 1

print(result)

# 3
# 4 4 1


