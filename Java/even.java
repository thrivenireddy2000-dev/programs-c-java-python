import java.util.*;
class even
{
    public static void main (String ar[])
  {  
// declare a variable
int a;

Scanner s=new Scanner (System.in);

// Prompt the user
System.out.print("Enter a number: ");

//read input(a)  value
a=s.nextInt();

//check condition
if(a%2==0)
System.out.println("given number is even");
else
System.out.println("given number is odd");

}

}
