#include <stdio.h>
#include <string.h>

void main()
{
    char str[] = "welcome";
    char str2[] = {'w', 'e', 'l', 'c', 'o', 'm', 'e', '\0'};

    printf("length of str is %d\n", strlen(str));
    printf("length of str2 is %d\n", strlen(str2));
}