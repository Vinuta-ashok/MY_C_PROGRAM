#include<stdio.h>

int main()
{
    char rose[20];
    printf("enter the string array\n");
    fgets(rose,sizeof(rose),stdin);
    printf("%s",rose);
}
