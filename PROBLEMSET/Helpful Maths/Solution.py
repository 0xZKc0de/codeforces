string = input()

lst = list(string)
numbers = []
plus = []
for element in lst:
    if element != "+":
        numbers.append(int(element))
    else:
        plus.append(element)
numbers.sort()
result = []
while len(numbers) != 0 and len(plus) != 0:
    result.append(str(numbers.pop(0)))
    result.append(plus.pop(0))
if len(numbers) != 0:
    result.append(str(numbers.pop(0)))
print("".join(result))