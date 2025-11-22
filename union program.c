#include<stdio.h>
int main()
{
    union vinuta{
        int age;
        float mark;
        
    };
    union vinuta v;
    v.age=10;
    printf("%d\n",v.age);
    v.mark=50;
    printf("%f\n",v.mark);
    printf("%d\n",v.age);
    
}
