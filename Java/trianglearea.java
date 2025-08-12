import java.util.*;
class trianglearea
{
    public static void main(String ar[])
    {
       // declare b,h,area
       double b,h,area; 

       Scanner s=new Scanner(System.in);

       System.out.println("Please enter b value: ");
       b=s.nextDouble();

       System.out.println("Please enter b : ");
       h=s.nextDouble();

       //calculate area
       area=(b*h)/2;

       // print area
       System.out.println("\n area is: "+area);



    }
}