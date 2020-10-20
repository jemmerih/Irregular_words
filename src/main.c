#include "computing.h"
#include <stdio.h>
#include <string.h>

int main()
{
    int random = 0;
    char check[16];
    int error_ps = 0;
    int error_pp = 0;
    printf("Please enter word to past simple\n");
    check[16] = enter(check);                     // enter ps
    lower(check);
    error_ps = check_ps(check, error_ps, random); // check ps
    printf("Please enter word to past participle\n");
    check[16] = enter(check);                     // enter pp
    lower(check);
    error_pp = check_pp(check, error_pp, random); // check pp
    // printf("\nmain -->%s",check);
    printf("error_ps --> %d\n", error_ps);
    printf("error_pp --> %d\n", error_pp);
}
