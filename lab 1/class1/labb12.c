#include<stdio.h>
int main()
{
    int total,rem;
    printf("enter total amount: ");
    scanf("%d",&total);
    printf("The cashier will give 10 tk note %d\n",total/10);
    printf("The cashier will give 50 tk note %d\n",total/50);
    printf("The cashier will give 100 tk note %d\n",total/100);
}