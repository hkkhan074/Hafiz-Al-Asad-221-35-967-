#include<stdio.h>
int main()
{
    int arif,fahmid,joy;
    printf("Enter the age of Arif:\n");
    scanf("%d",&arif);
    printf("Enter the age of fahmid\n");
    scanf("%d",&fahmid);
    printf("Enter the age of Joy : \n");
    scanf("%d",&joy);
    if(arif<fahmid&&arif<joy){
        printf("arif is the youngest\n");
    }
    else if(fahmid<arif&&fahmid<joy){
        printf("Fahmid is the youngest one\n");
    }
    else printf("joy is the youngest:\n");
    }