#include <stdio.h>

void main()
{
    char str[] = "welcome";
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    printf("Length of the string is %d\n", i);
}