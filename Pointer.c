//Pointer and Double pointer program
#include<stdio.h>
int main()
{
int Num=10;
int *ptr=&Num;
int **p2p=&ptr;
printf("\nValue at Num =%d",Num);
printf("\nValue at *ptr =%d",*ptr);
printf("\nValue at **p2p =%d",**p2p);
return 0;
}
