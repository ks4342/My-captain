#include<stdio.h>
#include<stdlib.h>
struct details
{
char Name[30];
int Age;
long long int Mobile_no;
int salary;

};
 int main ()

{
int i;
struct details E[12345];
for(i=0;i<5;i++)
    {
scanf("%s",&E[i].Name);
scanf("%d",&E[i].Age);
scanf("%lli",&E[i].Mobile_no);
scanf("%d",&E[i].salary);


}
printf("Name\t\t   Age\t   Mobile no\t   Salary ");
for(i=0;i<5;i++)
    {
printf("\n%s\t %d\t %lli\t %d\t",E[i].Name,E[i].Age,E[i].Mobile_no,E[i].salary);
}
return 0;
}











