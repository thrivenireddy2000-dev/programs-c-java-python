import java.util.*;
class temparature
{
    public static void main(String x[])
    {
    double f,c;

    System.out.println("Enter f value: "); 
    Scanner s=new Scanner(System.in);
    f=s.nextDouble();
    //calculate c value 
    c = ((f-32)*5)/9;
    //print c value
    System.out.println(" result is: " +c);
}
}