#include<stdio.h>
int main()
{
    struct vinuta
    {
        int age;
        float marks;
    };
    struct vinuta vin[3];
    for(int i=0;i<3;i++)
    {
        printf("enter the age  and marks\n");
        scanf("%d%f",&vin[i].age,&vin[i].marks);
        
        printf("age:%d\n",vin[i].age);
        printf("marks:%f\n",vin[i].marks);
    }
}
