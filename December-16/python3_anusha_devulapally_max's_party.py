message=input()

key=input()

n=len(message)

def right(msg):
  k=list(msg)
  for i in range(len(k)):
    if(k[i]>='A' and k[i]<='Z'):
      val=ord(k[i])+1
      if(val<=ord('Z')):
        k[i]=chr(val)
      else:
        k[i]='A'
    else:
      val=ord(k[i])+1
      if(val<=ord('z')):
        k[i]=chr(val)
      else:
        k[i]='a'
  return ''.join(k)

def left(msg):
  k=list(msg)
  for i in range(len(k)):
    if(k[i]>='A' and k[i]<='Z'):
      val=ord(k[i])-1
      if(val>=ord('A')):
        k[i]=chr(val)
      else:
        k[i]='Z'
    else:
      val=ord(k[i])-1
      if(val>=ord('a')):
        k[i]=chr(val)
      else:
        k[i]='z'
  return ''.join(k)

def rotate(msg):
  k=list(msg)
  s=k[-1]
  s1=''.join(k[:-1])
  k=s+s1
  return k

for k in key:
  if(k=='L'):
    message=left(message)
    print(message)
  elif(k=='R'):
    message=rotate(message)
    print(message)
  else:
    message=right(message)
    print(message)
