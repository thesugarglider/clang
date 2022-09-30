#include<stdio.h>

void main(){
    int a = 10;
    int *ptr = &a;

    printf("Address of a is %p\n",&a);
    printf("Value of a is %d\n",a);
    printf("Again address of a is %p\n",ptr);
    printf("Again  value of a is %d\n",*ptr);

    int **ptr1 = &ptr;
    **ptr1 = 30;
    printf("Address of a is %p\n",&a);
    printf("Value of a is %d\n",a);
    printf("Again address of a is %p\n",ptr1);
    printf("Again value of a is %d\n",**ptr1);


}