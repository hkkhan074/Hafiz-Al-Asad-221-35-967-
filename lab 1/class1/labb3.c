#include<stdio.h>
int main()
{
    double temp,t;
    printf("Enter the temperature in farenhite : \n");
    scanf("%lf",&temp);
    printf("Temperature in centigrade is : %lf\n",(5.0/9.0)*(temp-32));
    return 0;
}