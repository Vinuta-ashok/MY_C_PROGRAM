#include<stdio.h>
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void main()
{
    int balance1,balance2;
    printf("enter the balance of account 1:");
    scanf("%d",&balance1);
    printf("enter the balance of account 2:");
    scanf("%d",&balance2);
    printf("\n before swaping:\n");
    printf("account 1 balance:%d\n",balance1);
     printf("account 2 balance:%d\n",balance2);
     swap(&balance1,&balance2);
     printf("\nafter swapping:\n");
     printf("account 1 balance:%d\n",balance1);
     printf("account 2 balance:%d\n",balance2);
}
     
