
#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter any intazer =");
    scanf("%d %d %d",&num1,&num2,&num3);

    if(num1>num2 && num1>num3)
        printf("Large Number %d",num1);
    else if(num2>num1 && num2>num3)
        printf("Large Number %d",num2);
    else if(num3>num1 && num3>num1)
        printf("Large Number %d",num3);
    else
        printf("Number are equal");

    return 0;



}
