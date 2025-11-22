#include<stdio.h>
enum week{
    sunday,
    monday,
    tuesday,
    wednesday,
    firday,
    saturday
    
};
int main()
{
    enum week today;
    today=saturday;
    printf("day number:%d",today);
return 0;
}
