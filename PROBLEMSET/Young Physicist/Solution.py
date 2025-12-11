t = int(input())
cord = []
for _ in range(t):
    cord.append(input().split())
    
sum_x, sum_y, sum_z = 0, 0, 0
for element in cord:
    sum_x += int(element[0])
    sum_y += int(element[1])
    sum_z += int(element[2])
if not (sum_x or sum_y or sum_z):
    print("YES")
else:
    print("NO")
    