import sys
from collections import Counter

input = sys.stdin.readline

def solve():

    t_str = input().strip()
    if not t_str:
        return
    t = int(t_str)

    for _ in range(t):

        line = input().split()
        if not line: break
        n = int(line[0])
        k = int(line[1])

        s = input().strip()

        counts = Counter(s)
        odd_count = 0
        for val in counts.values():
            if val % 2 != 0:
                odd_count += 1

        if odd_count <= k + 1:
            print("YES")
        else:
            print("NO")

if __name__ == "__main__":
    solve()