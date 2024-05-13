#include<stdio.h>
int main()
{
    int n,  Fibonacci=0;

    printf("ENTER THE NUMBERS :-");
    scanf("%d",&n);

    for (int i = n; i>=1; i--)
    {
        Fibonacci= Fibonacci+i;
    }

    printf(" FIBONACI SERICE IS  %d :- IS : %d ",n , Fibonacci);
}