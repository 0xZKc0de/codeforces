from collections import Counter

n_test = int(input())

for _ in range(n_test):
    n = int(input())
    string = input()
    letter_count = Counter(string)
    max_count = 0
    character = ""
    for key, value in letter_count.items():
        if value >= max_count:
            max_count = value
            character = key
    if character != string[-1]:
        print(n - letter_count[string[-1]])
    else:
        print(n-max_count)
    