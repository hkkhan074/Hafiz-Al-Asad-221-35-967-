#include<stdio.h>
int main(){
    int year;
    printf("Enter the year to verify:\n");
    scanf("%d",&year);
    if(year%4==0){
        printf("The year is a leap year:\n");
    }
    else{
        printf("This year is not a leap year \n");
    }
    return 0;
}