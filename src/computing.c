#include "computing.h"
#include <stdio.h>
#include <string.h>

char past_simple[][16]
        = {"beat",    "became", "began",   "bent",  "bet",        "bit",
           "blew",    "broke",  "brought", "built", "bought",     "caught",
           "chose",   "came",   "cost",    "cut",   "dealt",      "dug",
           "did",     "drew",   "drank",   "drove", "ate",        "fell",
           "fed",     "felt",   "fought",  "found", "flew",       "forgot",
           "forgave", "froze",  "got",     "gave",  "went",       "grew",
           "hung",    "had",    "heard",   "hid",   "hit",        "held",
           "hurt",    "kept",   "knew",    "laid",  "led",        "left",
           "lent",    "let",    "lay",     "lit",   "lost",       "made",
           "meant",   "met",    "paid",    "put",   "read",       "rode",
           "rang",    "rose",   "ran",     "said",  "saw",        "sought",
           "sold",    "sent",   "set",     "shook", "shone",      "shot",
           "showed",  "shut",   "sang",    "sank",  "sat",        "slept",
           "spoke",   "spent",  "stood",   "stole", "stuck",      "struck",
           "swore",   "swept",  "swam",    "swung", "took",       "taught",
           "tore",    "told",   "thought", "threw", "understood", "woke",
           "wore",    "won",    "wrote"};

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

char lower(char check[])
{
    int i = 0;
    while (i < 16) {
        check[i] = tolower(check[i]);
        i++;
    }
    return check;
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
