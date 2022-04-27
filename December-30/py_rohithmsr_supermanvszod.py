n = int(input())
times = []

# get inputs
for i in range(0, n):
    a, b = input().split()
    a, b = int(a), int(b)

    times.append((a, 1))  # start point
    times.append((b, -1))  # end point

# sort based on first values
times.sort()

# get maximum using line sweep algorithm
ans = -1
count = 0
for i in times:
    count += i[1]
    if(count > ans):
        ans = count

print(ans)
