n=345
ld=0
rev=0
while(n>0):
    ld=n%10
    rev=(rev*10)+ld
    n=n//10
    print("reverse of given number is:", rev)
    