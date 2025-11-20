def count_number_pos(n : int) -> int:
    if n < 2 or n % 2 != 0:
        return 0
    arr = []
    for i in range((n // 2) + 1):
        for j in range((n //4) + 1):
            if 2 * i + 4 * j == n:
                arr.append([i,j])
    return len(arr)
    
        
number = int(input())

for _ in range(number):
    n = int(input())
    print(count_number_pos(n))


# The name of this problem is "Shizuku Hoshikawa and Farm Legs"