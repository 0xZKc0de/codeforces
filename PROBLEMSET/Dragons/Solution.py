arr = input().split()

n = int(arr[1])
power = int(arr[0])
ld = {}
for _ in range(n):
    arr = input().split()
    # ld[int(arr[0])] = int(arr[1])
    if int(arr[0]) in ld:
        ld[int(arr[0])] += int(arr[1])
    else:
        ld[int(arr[0])] = int(arr[1])
    
ld = sorted(ld.items())

for element in ld:
    if element[0] >= power:
        print("NO")
        exit(0)
    else:
        power += element[1]

print("YES")
        
