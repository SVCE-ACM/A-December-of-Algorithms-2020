# -*- coding: utf-8 -*-
"""December 7.ipynb

Automatically generated by Colaboratory.

Original file is located at
    https://colab.research.google.com/drive/1q0-dU1J4AGP-MDY5MV9UzVfYQ93IEDhg
"""

counterA=[]
counterB=[]
temp_screening=[]

print("Enter Counter A names, enter 'q' to end")
k=input()
while(k!='q'):
  counterA.append(k)
  k=input()
print("Enter Counter B names, enter 'q' to end")
k=input()
while(k!='q'):
  counterB.append(k)
  k=input()

print(counterA)

print(counterB)

m=len(counterA)
n=len(counterB)
i=0
j=0
k=0
while(i<m or j<n):
  while(k<2):
    if(j<n):
      temp_screening.append(counterB[j])
      j+=1
    k+=1
  k=0
  if(i<m):
    temp_screening.append(counterA[i])
    i+=1

print(temp_screening)
