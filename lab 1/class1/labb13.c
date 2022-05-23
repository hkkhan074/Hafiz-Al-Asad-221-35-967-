#include<stdio.h>
int main()
{
    double cost_price,selling_price,decision;
    printf("Enter the cost price :\n");
    scanf("%lf",&cost_price);
    printf("Ennter the selling price : \n");
    scanf("%lf",&selling_price);
    decision=cost_price+selling_price;
    if(selling_price<cost_price){
        printf("The seller has made a loss\n");
        printf("Total loss= %0.2lf",cost_price-selling_price);
    }
    else {printf("The seller has made  profit \n");
    printf("Total profit= %0.2lf",selling_price-cost_price);
    }
    return 0;
    
}