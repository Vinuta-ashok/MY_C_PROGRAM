#include<stdio.h>
int main(){
    int num=121,rem,rev=0,original;
    original=num;
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    if(original==rev)
    printf("given no is palindrome\n");
    else
    printf("given no is not palindrome");
}
