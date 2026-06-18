#include<stdio.h>
int main()
{
    int a = 87;
    int *p1=&a;
    printf("address of a %u.\n",&a);
    printf("address of p1 %u.\n",&p1);
    printf("value of p1 %d.\n",p1);
    printf("value of a %d.\n",a);
    printf("value of a %d.\n",*p1);
    printf("value of a %d.\n",*(&a));
    return 0;

}