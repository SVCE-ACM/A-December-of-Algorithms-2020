m,n=map(int,input().split())

mat=[]
for i in range(m):
    k=list(map(int,input().split()))
    mat.append(k)

mat

count=mat[0][0]
i=0
j=0

while(True):
  if (i==m-1 and j==n-1):
    break
  if (i<m-1 and j<n-1):
    if (mat[i+1][j]>mat[i][j+1]):
      count+=mat[i+1][j]
      i+=1
    else:
      count+=mat[i][j+1]
      j+=1
  elif (i==m-1 and j<=n-1):
    count+=mat[i][j+1]
    j+=1
  elif (j==n-1 and i<=m-1):
    count+=mat[i+1][j]
    i+=1

print(abs(count)+1)

