//IF else conditional statement
#include<stdio.h>
int main()
{
int Age;
printf("\nEnter your age.....");
scanf("\n%d",&Age);
if(Age>=18 && Age<110)
  printf("\nYou are eligible for voting......");
else
  printf("\nYou are not eligible for voting.....");
return 0;
}
