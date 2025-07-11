//Union program
#include<stdio.h>
union Result\
{
int Id;
char Name[20];
};
int main()
{
  union Result R;
printf("\nEnter a student id....");
scanf("\n%d",&R.Id);
printf("\nStudent Id =%d",R.Id);
printf("\nEnter a student name....");
scanf("\n%s",&R.Name);
printf("\nStudent Name =%s",R.Name);
return 0;
}
