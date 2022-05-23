#include<stdio.h>
int main()
{
    double population,men,women,literate;
    population=80000;
    literate=1.0/100.0*48.0*population;
    printf("total literate population is :%lf\n",literate);
    men=1.0/100.0*35*literate;
    printf("toal literate men is :%lf\n",men);
    printf("total literate women is : %lf\n",literate-men);
    return 0;
}