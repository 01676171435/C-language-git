#include<stdio.h>
int main()
{

    int digit;
    printf("Enter any digite");
    scanf("%d",&digit);


    switch(digit)
    {
    case 0:
        printf("Zero\n");
        break;
    case 1:
        printf("one\n");
        break;
    case 2:
        printf("two\n");
        break;
    case 3:
        printf("three\n");
        break;
    case 4:
        printf("four\n");
        break;
    case 5:
        printf("five\n");
        break;


    default:
        printf("the digite is invalid\n");


    }

}
