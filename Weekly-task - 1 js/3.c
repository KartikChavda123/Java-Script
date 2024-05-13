#include<stdio.h>
void main(){
    int number,i,sum;

    printf("Enter the numbers ");
    scanf("%d",&number);

    for (int i=1; i<=number; i++)
    {
        sum = sum + i;
    }

    printf("The Factoriyal Number is :- %d\n",sum);
    
}