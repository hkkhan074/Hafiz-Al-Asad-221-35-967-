#include<stdio.h>
int main()
{
    double population,men,women,literate,literate_men,literate_women;
    population=8000;

    men=0.52*8000;
    women=0.48*8000;
    literate=0.48*8000;
    printf("Total men = %0.2lf\n\n",men);
    printf("Total women = %0.2lf\n\n",women);
    printf("Total literate = %0.2lf\n\n",literate);
    literate_men=literate*0.35;
    printf("Total Literate men = %0.2lf\n\n",literate_men);
    printf("Total Illiterate men = %0.2lf\n\n",men-literate_men);
    literate_women=literate-literate_men;
    printf("Total literate women= %0.2lf",literate_women);
    printf("Total illiterate women =%0.2lf",women-literate_women);
    
    return 0;
}