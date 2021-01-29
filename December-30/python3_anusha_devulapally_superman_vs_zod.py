n=int(input())

dicti={}
cord=[]
for i in range(n):
  x,y=map(int,input().split())
  cord.append([x,y])
  for i in range(x,y):
    if(i not in dicti):
      dicti[i]=1
    else:
      dicti[i]+=1

dicti

maxi=0
for i,j in dicti.items():
  if(j>maxi):
    maxi=j
print(maxi)