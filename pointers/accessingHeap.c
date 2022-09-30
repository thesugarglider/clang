#include<stdio.h>
#include<stdlib.h>

void main(){
    int *ptr;

    ptr = (int *)malloc(5*sizeof(int));

    ptr[0] = 10;
    ptr[1] = 20;
    ptr[2] = 30;
    ptr[3] = 40;
    ptr[4] = 50;

    for(int i=0;i<5;i++){
        printf("%d ",ptr[i]);
    }

    printf("\n");
    printf("Deleting from heap\n");
    free(ptr);

}