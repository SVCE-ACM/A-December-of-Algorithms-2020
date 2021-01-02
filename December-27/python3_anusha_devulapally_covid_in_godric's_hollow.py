n=int(input())

import numpy as np
def distance(x,y):
  return round(np.sqrt(x**2+y**2))

yes=[]
no=[]
for i in range(n):
  x,y,re=map(str,input().split())
  x=int(x)
  y=int(y)
  k=distance(x,y)
  if (re=='Y'):
    yes.append(k)
  else:
    no.append(k)

print(yes)
print(no)

ye=max(yes)
count=0
for i in no:
  if(i<=ye):
    count+=1
if (count==0):
  print("No lockdown required")
else:
  print("Lockdown required")

