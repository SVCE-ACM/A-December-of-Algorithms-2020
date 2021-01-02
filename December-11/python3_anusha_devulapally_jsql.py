path="https://raw.githubusercontent.com/anusha-devulapally/A-December-of-Algorithms-2020/main/src/assets/dec%2011%20sample%20input.json"

import requests
req=requests.get(path).json()
print(req)

table_name=req['table name']
table_name

headers=req['headers']
cols=len(headers)
head=[]
for i in range(1,cols+1):
  head.append([headers[str(i)]['column name'],headers[str(i)]['data type']])
print(head)

records=req['records']
col=len(records)
rec=[]
for i in range(1,col+1):
  rec.append(records[str(i)])

print(rec)

print("create table",end=' ')
print(table_name,end=' ')
print('(',end='')
for i in range(len(head)):
  print(head[i][0],end=' ')
  print(head[i][1],end='')
  if(i<len(head)-1):
    print(",",end=' ')
print(')',end=';')

for i in range(len(rec)):
  print("insert into",end=' ')
  print(table_name,end=' ')
  print("values",end=' ')
  print("(",end='')
  for j in range(len(rec[i])):
    if("varchar" in head[j][1]):
      print('"{}"'.format(rec[i][j]),end='')
    else:
      print(rec[i][j],end='')  
    if(j<(len(rec[i])-1)):
      print(",",end=' ')
  print(")",end=';')
  print()

