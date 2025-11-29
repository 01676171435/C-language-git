
#include<stdio.h>
int main()
{
    int num1,num2,large;
    printf("Enter a Number:");
    scanf("%d %d",&num1,&num2);
    large = (num1>num2) ? num1 : num2;
    printf("large is =%d\n",large);
}
