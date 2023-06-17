

#include <stdio.h>

struct Rectangle
{
    int length;
    int breadth;
};

void main()
{
    struct Rectangle rectangle;
    struct Rectangle *ptr = &rectangle;
    ptr->length = 20;
    ptr->breadth = 15;
    printf("Length of the rectangle is %d and Breadth of the Rectangle is %d\n", ptr->length, ptr->breadth);
}