#include<stdio.h>
int main()
{
    double lengthr,breadthr,radius;
    printf("enter the length of the rectangle\n");
    scanf("%lf",&lengthr);
    printf("Enter the breadth of the rectangle :\n");
    scanf("%lf",&breadthr);
    printf("Enter the length of the circle :\n");
    scanf("%lf",&radius);
    printf("area of the rectangle is : %.2lf\n",lengthr*breadthr);
    printf("perimeter of the rectangle is : %.2lf\n",2*(lengthr+breadthr));
    printf("The area of circle is :%.2lf\n",3.1416*radius*radius);
    printf("Circumferance of circle is :%.2lf\n",2*3.1416*radius);
    return 0;
}



/*area of the rectangle is : 12.000000
perimeter of the rectangle is : 14.000000
The area of circle is :28.274400
Circumferance of circle is :28.274400
*/