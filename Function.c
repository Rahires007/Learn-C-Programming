//Function program
#include<stdio.h>
int Square(int);
int main()
{
int Num;
printf("\nEnter a no.....");
scanf("\n%d",&Num);
Square(Num);
return 0;
}
int Square(int x)
{
printf("\nSquare of no....%d",x*x);
return 0;
}
