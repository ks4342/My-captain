#include<stdio.h>
 main ()

{
    int sum;
    int*p;
    int a1,b1,c1,a2,b2,c2,a3,c3,b3;
    printf("Please enter the elements of array :");
    scanf("%d%d%d%d%d%d%d%d%d",&a1,&b1,&c1,&a2,&b2,&c2,&a3,&b3,&c3);
printf("The Matrix is :");
int a[3][3]={{a1,b1,c1},{a2,b2,c2},{a3,b3,c3}};
for(p=&a[0][0];p<=&a[2][2];p++)
{
    printf(" %d", *p);
}
sum = a1 + b2 +c3;

printf("\nThe sum of diagonal elements is : %d",sum);
}


