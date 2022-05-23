#include<stdio.h>
int main()
{
    double distance;
    printf("Enter the distance between Mirpur and Ashulia:\n");
    scanf("%lf",&distance);
    printf("distance in meter in meter: %lf\n",distance*1000);
    printf("distance in feet :%lf\n",distance*3280.84);
    printf("distance in inches:%lf \n",distance*39370.1);
    printf("Distance in cm :%lf\n",distance*100000);

}