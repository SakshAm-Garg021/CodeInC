#include<stdio.h>

void main(){

    int cel;
    int far;
    printf("Enter the temperature in Celcius : ");
    scanf("%d",&cel);
    far=((cel*9)/5)+32;
    printf("The temperature Celcius to Feraniet is %d F\n",far);
}