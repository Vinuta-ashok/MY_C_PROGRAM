#include<stdio.h>
int main()
{
    int *p,num;
    p=&num;
    printf("value of num=%d\n",&num);
    printf("adress of num=%p\n",&num);
    printf("pointer p store=%p\n",p);
    printf("value using pointer=%d\n",*p);
    return 0;
}
   
