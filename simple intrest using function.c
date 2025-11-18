#include<stdio.h>
 int sicalculater(){
     int p,r,t,si;
    printf("enter your principle amount\n");
     scanf("%d",&p);
     printf("enter your time amount\n");
     scanf("%d",&t);
     printf("enter your rate\n");
     scanf("%d",&r);
     si=(p*t*r)/100;
     printf("%d",si);
 }
 int main(){
   
   sicalculater();
   sicalculater();
 }
 
