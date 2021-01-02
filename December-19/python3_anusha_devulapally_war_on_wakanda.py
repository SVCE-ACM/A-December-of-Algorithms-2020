inp=list(map(int,input().split()))

maxi=int(input())

c=1
count=0
while(c<len(inp)):
  k=inp[c]
  if(k>0):
    c+=k+1
    count+=1
  else:
    c+=1

print(count,end=' ')
print("Mission",end=' ')
if (count<=maxi):
  print("Successful")
else:
  print("Unsuccessful")

