#include<stdio.h>
void main(){

    int a , b , c;

    printf("ENTER THE NUMBERS OF A :-");
    scanf("%d",&a);

    printf("ENTER THE NUMBERS OF B :-");
    scanf("%d",&b);


    c=a;
    a=b;
    b=c;

    printf("A :- %d\n",a);

    printf("B :- %d",b);   
}