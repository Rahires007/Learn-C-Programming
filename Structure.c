//Structure program
#include<stdio.h>
struct Result
{
int Id;
char Name[20];
};
int main()
{
  struct Result R;
printf("\nEnter a student id....");
scanf("\n%d",&R.Id);
printf("\nEnter a student Name....");
scanf("\n%s",&R.Name);
printf("\nStudents Id =%d",R.Id);
printf("\nStudents Name =%s",R.Name);
return 0;
}
