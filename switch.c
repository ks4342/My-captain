#include<stdio.h>
int choice ;
int main()
{

printf("Enter your choice\n1. \n2. \n3. \n4. \n5.");
choice=0;
scanf("%d", &choice);
switch (choice)
{
    case 1: printf("Food item-Pizza\nPrice-Rs249");
    break;
    case 2: printf("Food item-Burger\nPrice-Rs129");
    break;
    case 3: printf("Food item-Pasta\nPrice-Rs179");
    break;
    case 4: printf("Food item-FrenchFries\nPrice-Rs99");
    break;
    case 5: printf("Food item-Sandwich\nPrice-Rs249");
    break;
    default: printf("Invalid Choice");

}
}
