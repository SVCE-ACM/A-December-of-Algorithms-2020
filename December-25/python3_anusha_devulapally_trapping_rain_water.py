height=list(map(int,input().split()))

height

def trapped_water(h):
  n=len(h)
  total=0
  for i in range(1,n-1):
    left=h[i]
    for j in range(i):
      left=max(h[j],left)
    right=h[i]
    for j in range(i+1,n):
      right=max(h[j],right)
    total+=min(left,right)-h[i]
  return total

print(trapped_water(height))

