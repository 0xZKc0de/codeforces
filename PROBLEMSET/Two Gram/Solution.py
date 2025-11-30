from collections import Counter

length = int(input())
string = input()
arr = []
for i in range(length - 1):
    arr.append(string[i]+""+string[i+1])

gram_count = Counter(arr)
result = 0
gram = ""
for key, value in gram_count.items():
    if value >= result:
        result = value
        gram = key
print(gram)