#include<stdio.h>
int main()
{
    int x1,y1,x2,y2,x3,y3;
    printf("Enter the value of x1,y1");
    scanf("%d%d",&x1,&y1);
    printf("Enter the value of x2,y2");
    scanf("%d%d",&x2,&y2);
    printf("Enter the value of x3,y3");
    scanf("%d%d",&x3,&y3);
    if(x1==x2==x3){
        printf("It is a straight line\n");
    }
    else if(y1==y2==y3){
        printf("It is a straight line \n");
    }
    else printf("This is not a straight line \n");
    return 0;

}