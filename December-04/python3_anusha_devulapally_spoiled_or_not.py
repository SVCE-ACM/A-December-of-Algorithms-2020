no=int(input())

m_dates=[]
for i in range(no):
  li=list(map(str,input().split()))
  m_dates.append(li)

print(m_dates)

before=[]
for i in range(no):
  before.append(int(input()))

given_date=list(map(str,input().split()))


def diff_dates(dt1,dt2):
  t1=(int(dt1[2])-1)*360+int(dt1[0])+30*(int(dt1[1])-1)
  t2=(int(dt2[2])-1)*360+int(dt2[0])+30*(int(dt2[1])-1)
  return abs(t1-t2)

spoiled=0
for i in range(no):
  diff=diff_dates(m_dates[i],given_date)
  if(diff>before[i]):
    spoiled+=1

print(spoiled)

