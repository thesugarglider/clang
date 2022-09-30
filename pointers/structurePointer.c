#include<stdio.h>

struct Rectangle
{
    int length;
    int breadth;
}Rectangle;


void main(){
    Rectangle *r1;
    printf("%ld\n",sizeof(r1));
}