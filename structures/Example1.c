#include <stdio.h>

struct Rectangle
{
    int length;
    int breadth;
};

void main()
{
    struct Rectangle rectangle;
    rectangle.length = 20;
    rectangle.breadth = 15;
    printf("Length of the rectangle is %d and Breadth of the Rectangle is %d\n", rectangle.length, rectangle.breadth);
}