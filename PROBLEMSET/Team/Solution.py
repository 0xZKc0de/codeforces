n = int(input())

arr = []
sub_arr = []
for i in range(n):
    
    sub_arr = input().split()
    sub_arr = [ int(element) for element in sub_arr]
    
    arr.append(1 if sum(sub_arr) >=2 else 0)
    
print(sum(arr))
    
    