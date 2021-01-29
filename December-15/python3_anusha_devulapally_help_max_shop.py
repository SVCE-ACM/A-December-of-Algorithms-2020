st=input()

k=list(st)
print(k)

def equal(s):
  n=len(s)
  sh=0
  tr=0
  for i in s:
    if(i=='s'):
      sh+=1
    if(i=='t'):
      tr+=1
  if(sh==tr):
    return 1
  else:
    return 0

def equal_s_t(st):
  maxi=0
  n=len(st)
  for i in range(n):
    for j in range(i,n):
      if(equal(st[i:j+1]) and maxi<j-i+1):
        maxi=j-i+1
  return maxi

print(equal_s_t(st))

