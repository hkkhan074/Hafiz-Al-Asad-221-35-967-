#include<stdio.h>
void print()
{
    printf("Enter the marks \n");
}
int main(){
    double bangla,english,ict,math,gk,total;
    print();
    scanf("%lf",&bangla);
    print();
    scanf("%lf",&english);
    print();
    scanf("%lf",&ict);
    print();
    scanf("%lf",&math);
    print();
    scanf("%lf",&gk);
    total=bangla+english+ict+math+gk;
    printf("Total result is: %lf",total);
    printf("percentage is :%lf\n",total*0.01);
    return 0;
}