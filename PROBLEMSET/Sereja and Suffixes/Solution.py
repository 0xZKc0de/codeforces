import sys

input = sys.stdin.read
data = input().split()

n = int(data[0])
m = int(data[1])

a = [int(x) for x in data[2:2+n]]

dp = [0] * n
seen = set()

for i in range(n - 1, -1, -1):
    seen.add(a[i])
    dp[i] = len(seen)

current_idx = 2 + n
output = []

for _ in range(m):
    l = int(data[current_idx])
    current_idx += 1
    output.append(str(dp[l-1]))

print('\n'.join(output))