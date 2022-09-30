#include<stdio.h>
#include<stdlib.h>

struct Rectangle{
    int length;
    int breadth;
};

void main(){
    struct Rectangle *ptr;

    ptr = (struct Rectangle *)malloc(sizeof(struct Rectangle));

    ptr -> length = 10;
    ptr -> breadth = 20;

    printf("length = %d \n",ptr->length);
    printf("breadth = %d \n",ptr->breadth);

    free(ptr);
}