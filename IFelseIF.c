//IF Else IF conditional statement
#include<stdio.h>
int main()
{
int Num;
printf("\nEnter a no......");
scanf("\n%d",&Num);
if(Num>0)
  printf("\nGiven no is positive....");
 else if(Num<0)
    printf("\nGiven no is Negative.....");
  else
    printf("\nGiven no is zero....");
  return 0;
}
