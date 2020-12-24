
correct_word=list(map(str,input().split()))

correct_word

misspelt_words=input()

def matchornot(correct,wrong):
  m=len(correct)
  n=len(wrong)
  if(m!=n):
    return 0
  total=0
  for i in range(m):
    if(correct[i]!=wrong[i]):
      total+=1
  return total

for i in correct_word:
  val=matchornot(i,misspelt_words)
  if(val==1):
    print(i)

