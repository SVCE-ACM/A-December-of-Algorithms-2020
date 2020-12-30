n, m = map(int, input().split())
aa = []
for _ in range(n):
    row = list(map(int, input().split()))
    row.append(0)
    aa.append(row)
aa.append([0] * (m + 1))
d1, d2, d3, d4 = ([[0] * (m + 1) for _ in range(n + 1)] for _ in (1, 2, 3, 4))
for i in range(n):
    for j in range(m):
        d1[i][j] = max(d1[i - 1][j], d1[i][j - 1]) + aa[i][j]
for i in range(n - 1, -1, -1):
    for j in range(m):
        d2[i][j] = max(d2[i + 1][j], d2[i][j - 1]) + aa[i][j]
for i in range(n - 1, -1, -1):
    for j in range(m - 1, -1, -1):
        d3[i][j] = max(d3[i + 1][j], d3[i][j + 1]) + aa[i][j]
for i in range(n):
    for j in range(m - 1, -1, -1):
        d4[i][j] = max(d4[i - 1][j], d4[i][j + 1]) + aa[i][j]

ans = 0
for i in range(1, n-1):
    for j in range(1, m-1):
        z1, z2, z3, z4 = d1[i][j-1], d2[i+1][j], d3[i][j+1], d4[i-1][j]
        ans = max(z1+z2+z3+z4, ans)
        z1, z2, z3, z4 = d1[i-1][j], d2[i][j-1], d3[i+1][j], d4[i][j+1]
        ans = max(z1+z2+z3+z4, ans)
print(ans)
