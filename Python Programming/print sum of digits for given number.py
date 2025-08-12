n=345
sum=0
ld=0
while(n>0):
    ld=n%10
    sum=sum+ld
    n=n//10
    print("sum is:",sum)