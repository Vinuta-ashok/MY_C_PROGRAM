#include<stdio.h>
int ispassed(int m1,int m2,int m3)
{
    if(m1>=40&&m2>=40&&m3>=40)
    return 1;
    else return 0;
}
int main()
{
    int sub1,sub2,sub3;
    float average;
    printf("enter the marks of sub1,sub2,sub3\n");
    scanf("%d %d %d\n",&sub1,&sub2,&sub3);
    average=(sub1+sub2+sub3)/3.0;
    printf("average marks:%.2f\n",average);
    if( ispassed(sub1,sub2,sub3))
    printf("result:pass\n");
    else
    printf("result:fail\n");
}
