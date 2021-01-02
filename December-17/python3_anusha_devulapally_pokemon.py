n=int(input())

a=list(map(int,input().split()))
b=list(map(int,input().split()))

a=sorted(a)
b=sorted(b)

def pokemon(a,b):
  if(len(a)==0 or len(b)==0):
    return 0
  if (a[0]>b[0]):
    return 1+pokemon(a[1:],b[1:])
  else:
    return pokemon(a[1:],b)

print(pokemon(a,b))

