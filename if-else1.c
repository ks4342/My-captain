#include<stdio.h>
int marks;
int main ()

{
    printf("Enter your marks: ");
    marks =0;
    scanf("%d" ,&marks);

if (marks<=100 &&  marks >85)
{-
    printf("Grade A");
}
    if (marks<84 && marks> 70)
    {
        printf("Grade B");
    }
    if (marks<69 && marks> 55)
    {
        printf("Grade C");
    }
    if (marks<54 && marks> 40)
    {
        printf("Grade D");
    }
    if (marks <40)
    {
        printf("Grade F");
    }

}

