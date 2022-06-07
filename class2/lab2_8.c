#include<stdio.h>
int main()
{
    double h,b,hybrid,area,perimeter;
    printf("Enter the height,bsae and hybrid of rectangle :\n");
    scanf("%lf%lf%lf",&h,&b,&hybrid);
    area=05*(h*b);
    perimeter=h+b+hybrid;
    if(area>perimeter){
        printf("area is greater than perimeter\n");
    }
    else printf("Perimete is greater than area\n");
    return 0;
    
}