#include <stdio.h>

void main()
{
    char str[] = "WELCOME";
    int i = 0;

    while (str[i] != '\0')
    {
        str[i] = str[i] + 32;
        i++;
    }

    printf("string in lowercase is %s\n", str);
}
