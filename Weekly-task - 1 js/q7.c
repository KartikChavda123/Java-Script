#include<stdio.h>
void main()
{
    int a;

    printf("ENTER THE NUMBERS OF A :-");
    scanf("%d",&a);

    if (a % 4 == 0)
    {
        printf("THIS IS LEAP YEAR");
    }

    else
    {
        printf("THIS IS NOT LEAP YEAR");
    }
    
}