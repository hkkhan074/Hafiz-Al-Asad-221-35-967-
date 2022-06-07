#include<stdio.h>
int main()
{
    char a;
    printf("enter any character to check wheather it is small or capital :\n");
    getchar();
    if(a>'A' && a<'Z'){
        printf("The character is Capital \n");
    }
    else printf("The character is small\n");
    return 0;
}