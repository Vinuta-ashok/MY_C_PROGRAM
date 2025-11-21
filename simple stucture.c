#include<stdio.h>
int main(){
     struct person{
    int age;
    float height;
};
struct person p;
p.age=20;
p.height=5.6;
printf("age:%d\n",p.age);
printf("height:%f\n",p.height);
return 0;
}
    
