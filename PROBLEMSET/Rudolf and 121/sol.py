import sys

# 1. هذا السطر مهم لسرعة القراءة في بايثون
input = sys.stdin.readline

def solve():
    t_str = input().strip()
    if not t_str:
        return
    t = int(t_str)

    for _ in range(t):
        n = int(input().strip())
        line = input().split()
        line = [int(element) for element in line]

        possible = True

        for i in range(1, n - 1):
          
            if line[i-1] < 0:
                possible = False
                break
            

            if line[i-1] == 0:
                continue

            ops = line[i-1]

            line[i-1] -= ops      
            line[i]   -= 2 * ops   
            line[i+1] -= ops      

        if possible and line[n-1] == 0 and line[n-2] == 0:
            print("YES")
        else:
            print("NO")

if __name__ == "__main__":
    solve()