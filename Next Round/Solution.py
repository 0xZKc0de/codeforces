first_arr = input().split()

n, k = int(first_arr[0]), int(first_arr[1])

second_arr = input().split()

sum = 0

k_score = int(second_arr[k-1])

for i in range(n):
    if int(second_arr[i]) >= k_score and int(second_arr[i]) > 0:
        sum +=1
        
print(sum)