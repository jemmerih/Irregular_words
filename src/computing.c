#include <stdio.h>
#include <string.h>

char past_participle[][16] = {"beaten"};

char past_simple[][16] = {"beat"};

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

int main()
{
    int random = 0;
    char check[16];
    int error_ps = 0;
    int error_pp = 0;
    printf("Please enter word to past simple\n");
    check[16] = enter(check);                     // enter ps
    error_ps = check_ps(check, error_ps, random); // check ps
    printf("Please enter word to past participle\n");
    check[16] = enter(check);                     // enter pp
    error_pp = check_pp(check, error_pp, random); // check pp
    // printf("\nmain -->%s",check);
    printf("error_ps --> %d\n", error_ps);
    printf("error_pp --> %d\n", error_pp);
}
