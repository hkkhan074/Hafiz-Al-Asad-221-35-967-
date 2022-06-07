#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three sides of triangle \n");
    scanf("%d%d%d",&a,&b,&c);
    int total=a+b+c;
    if(total==180){
        printf("The triangle is valid \n");
    }
    else printf("Triangle is not valid \n");
    return 0;
}