x,y,len=map(int,input().split())

coord=[]
while(True):
  k=list(map(int,input().split()))
  if(k==[]):
    break
  coord.append(k)

print(coord)

import sys
min=sys.maxsize
li=list()
for i in coord:
  if(i[2]>len):
    l=abs(x-i[0])+abs(y-i[1])
    if(l<min):
      min=l
      li=i

if(li[0]>0):
  print('Right',end=' ')
  print('Straight '*li[0],end='')
  if(li[1]>0):
    print('Left',end=' ')
    print('Straight '*li[1],end='')
  elif(li[1]<0):
    print('Right',end=' ')
    print('Straight'*li[1],end='')
elif(li[0]<0):
  print('Left',end=' ')
  print('Straight'*li[0],end=' ')
  if(li[1]>0):
    print('Right',end=' ')
    print('Straight '*li[1],end='')
  elif(li[1]<0):
    print('Left',end=' ')
    print('Straight'*li[1],end='')

