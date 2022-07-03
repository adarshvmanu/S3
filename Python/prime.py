num = int(input(" Enter Number : "))
a=0
if num > 1:
 for i in range(2, num//2):
  if (num % i) == 0:
   a=0
   break
  else:
   a=1
else:
   a=0

if a==1 :
 print("The Number is Prime")
else :
 print("The Number is Not Prime")
