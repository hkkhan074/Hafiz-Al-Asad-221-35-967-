#include<stdio.h>
int a,b,c,d,e;
int org(){
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    return a,b,c,d,e;
}

int rev()
{
    printf("%d%d%d%d%d",e,d,c,b,a);
    return e,d,c,b,a;
}
int main(){
    if(org()==rev()){
        printf("The numbers are same \n");
    }
    else printf("Numbers are not same \n");
    return 0;
}