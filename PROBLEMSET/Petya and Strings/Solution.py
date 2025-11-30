string1, string2 = input(), input()


alphabet = "abcdefghijklmnopqrstuvwxyz"

result = 0
for e1, e2 in zip(list(string1), list(string2)):

    if alphabet.index(e1.lower()) > alphabet.index(e2.lower()):
        result = 1
        break
    elif alphabet.index(e1.lower()) < alphabet.index(e2.lower()):
        result = -1
        break
        
print(result)