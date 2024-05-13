#include<stdio.h>
void main()
{
    int a , b , c;

    printf("ENTER THE NUMBERS OF A :-");
    scanf("%d",&a);

    printf("ENTER THE NUMBERS OF B :-");
    scanf("%d",&b);

    printf("ENTER THE NUMBERS OF C :-");
    scanf("%d",&c);

    if (a>b)
    {
        printf("A IS BIG %d",a);
    }

    else if(b>c)
    {
        printf("B IS BIG %d",b);
    }

    else{
        printf("C IS BIG %d",c);
    }
}