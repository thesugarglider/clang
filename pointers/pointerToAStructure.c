#include<stdio.h>

struct Rectangle
{
    int length;
    int breadth;
}Rectangle;

void main(){
     Rectangle r = {10,5};

     Rectangle *ptr=&r;

    //old way of accessing members using pointers
    printf("%d \n",(*ptr).length);
    printf("%d \n",(*ptr).breadth);

    
    // ptr->length = 10;
    // ptr->breadth = 5;

    printf("%d \n",ptr->length);
    printf("%d \n",ptr->breadth);
}
