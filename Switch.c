//Switch case program
#include<stdio.h>
int main()
{
int Num;
int Operation;
printf("\nEnter a number.....");
scanf("\n%d",&Num);
printf("\n1...square \n2....Cube");
printf("\nselect operation you want to perform.....");
scanf("\n%d",&Operation);
switch(Operation)
{
case 1 :
printf("\nSquare =%d",Num*Num);
break;

case 2 :
printf("\nCube =%d",Num*Num*Num);
break;

default :
printf("\nInvalid operation please enter valid operation no.....");
break;
}
return 0;
}
