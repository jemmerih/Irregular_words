#include <stdio.h>
#include <string.h>

int check_pp(char check[], int error_pp, int random)
{
    if (strcmp(check, past_participle[random]) != 0)
        error_pp++;
    return error_pp;
}

int check_ps(char check[], int error_ps, int random)
{
    if (strcmp(check, past_simple[random]) != 0)
        error_ps++;
    return error_ps;
}

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

