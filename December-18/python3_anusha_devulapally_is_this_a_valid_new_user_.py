path="https://jsonplaceholder.typicode.com/users"

import requests
k=requests.get(path).json()

names=[]
for d in k:
  names.append(d['name'])

print(names)

k=input()

n=0
for i in k:
  n+=1

print(n)

flag=False
if (n>20):
  print("The username is not valid")
else:
  for i in inp:
    if((i>='a' and i<='z') or (i>='A' and i<='Z') or (i>='0' and i<='9') or i=='.' or i=='_' or i=='-'):
      continue
    elif (i==' '):
      print("The username is not valid")
    else:
      print("The username is not valid")
      flag=True
if (flag==False):
  if (inp not in names):
    print("The username is valid but not available")
  else:
    print("The username is valid and available")

