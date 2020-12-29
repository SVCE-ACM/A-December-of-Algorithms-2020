def palindrome(st):
  maxl=0
  s=0
  n=len(st)
  l=0
  h=0
  for i in range(1,n):
    l=i-1
    h=i
    while(l>=0 and h<n and st[l]==st[h]):
      if(h-l+1>maxl):
        s=l
        maxl=h-l+1
      l-=1
      h+=1
    l=i-1
    h=i+1
    while(l>=0 and h<n and st[l]==st[h]):
      if(h-l+1>maxl):
        s=l
        maxl=h-l+1
      l-=1
      h+=1
  return st[s:s+maxl]

st=input()
final=palindrome(st)

n=len(final)
total=0
for i in final:
  if(i=='D'):
    total+=500
  elif(i=='R'):
    total+=250
  elif(i=='E'):
    total+=100
print(total*n)

