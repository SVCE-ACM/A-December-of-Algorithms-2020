# -*- coding: utf-8 -*-
"""December 3.ipynb

Automatically generated by Colaboratory.

Original file is located at
    https://colab.research.google.com/drive/1q0-dU1J4AGP-MDY5MV9UzVfYQ93IEDhg
"""

# assuming the entered are in order
no_of_meetings= int(input("enter the no of meetings"))
total_meetings=[]
for i in range(no_of_meetings):
  start_meet=input("enter starting time of the meeting")
  end_meet=input("enter ending time of the meeting")
  total_meetings.append([start_meet,end_meet])
print(total_meetings)

start_office='0900'
end_office='1700'

def difference(s,e):
  s_min=(int(s[0])*10+int(s[1]))*60+(int(s[2])*10+int(s[3]))
  e_min=(int(e[0])*10+int(e[1]))*60+(int(e[2])*10+int(e[3]))
  return e_min-s_min

prev=start_office
next=end_office
result=[]
for i in range(no_of_meetings):
  ans=difference(prev,total_meetings[i][0])
  if(ans>=60):
    result.append([prev,total_meetings[i][0]])
  prev=total_meetings[i][1]
  if(i==no_of_meetings-1):
    ans=difference(total_meetings[i][1],next)
    if(ans>=60):
      result.append([total_meetings[i][1],next])

print(result)
