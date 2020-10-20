#include <stdio.h>
#include <string.h>

char enter(char check[])
{
    int i = 0;
    char str;
    memset(check, 0, 16);
    while ((str = getchar()) != '\n') {
        check[i] = str;
        i++;
        // printf("\ni-> %d",i);
    }
    // printf("%s\n",check);
    return check;
}

