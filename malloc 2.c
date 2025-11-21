#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p;
    p=(int*)malloc(sizeof(int));
    if(p==NULL){
        printf("memory not allocated!\n");
        return 0;
        
    }
    *p=50;
    printf("before free:value=%d\n",*p);
    free(p);
    printf("memory free successfully");
    
}
