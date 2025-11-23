import math

n_cases = int(input()) 

for _ in range(n_cases):
    number = int(input())
    arr = input().split()
    

    int_arr = [int(x) for x in arr]
    
    found_answer = -1

    for i in range(2, 3000): 
        is_valid = False 
        
        for j in range(number):

            if math.gcd(i, int_arr[j]) == 1:
                is_valid = True
                break 

        if is_valid:
            found_answer = i
            break 
            
    print(found_answer)