//Array program
#include<stdio.h>
int main()
{
int Num[5];
int x;
printf("\nEnter 5 no.....");
for(x=0; x<=4; x++)
{
scanf("\n%d",&Num[x]);
}
printf("\nGiven no...");
for(x=0; x<=4; x++)
{
printf("\n%d",Num[x]);
}
return 0;
}
