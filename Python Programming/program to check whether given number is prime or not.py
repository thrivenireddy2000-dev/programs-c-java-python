n=13;

# take a variable to indicate prime
p=0;

#check from 2 to n/2
for i in range(2,n//2):
    if(n%i==0):
          p=1;
          print("not a prime");
          break;


if(p==0):
 print("it is prime");

