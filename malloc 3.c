#include<stdio.h>
#include<stdlib.h>
int main()
{
int *raj=(int*)malloc(5*sizeof(int));
*raj=10;
printf("%d",*raj);
}
