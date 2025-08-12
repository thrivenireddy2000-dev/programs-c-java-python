n=121
num=n
ld=0
rev=0
while(n>0):
   ld=n%10
   rev=(rev*10)+ld
   n=n//10
if(num==rev):
        print("palindrom")
else:
        print("not a palindrom")