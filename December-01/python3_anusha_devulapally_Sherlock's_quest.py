def conv_no(s):
  p=0
  s=s[::-1]
  for i in s:
    p=i+p*10
  return p

def sum_left_right(n):
  digits=[]
  while(n>0):
    p=n%10
    digits.append(p)
    n=n//10
  mid=len(digits)//2
  left=digits[:mid]
  right=digits[mid:]
  sum_l=conv_no(left)
  sum_r=conv_no(right)
  return sum_l+sum_r

n=int(input())
if(n%3==0):
  double=n*n
  ans= sum_left_right(double)
  if(ans==n):
    print("Safe")
  else:
    print("Not Safe")
else:
  print("Not Safe")

