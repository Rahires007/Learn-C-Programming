//IF conditional statement 
#include<stdio.h>
int main()
{
int Password;
printf("\nEnter a Password.....");
scanf("\n%d",&Password);
if(Password==1137)
  printf("\nWelcome.....");
if(Password!=1137)
  printf("\nPlease try again.....");
return 0;
}
