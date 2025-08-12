#include<stdio.h>
int main()
{
// declare year variable
int year = 2024;
// check condition
if(year%4==0 && year%100!=0 || year%400==0)
printf("leap year");
else
printf("not a leap year");
return 0;

}