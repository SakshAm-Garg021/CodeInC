#include <stdio.h>

void main()
{

    int Si, P, R, T;
    printf("Enter the initial amount (principal amount) : ");
    scanf("%d", &P);
    printf("Enter the rate of interest in year : ");
    scanf("%d", &R);
    printf("Enter the time duration in year : ");
    scanf("%d", &T);
    Si = (P * R * T) / 100;
    printf("The simple interist is : %d", Si);
}