#include "computing.h"
#include <stdio.h>
#include <string.h>

char infinitive[][16] = {
        "beat",  "become", "begin",   "bend",       "bet",   "bite",   "blow",
        "break", "bring",  "build",   "buy",        "catch", "choose", "come",
        "cost",  "cut",    "deal",    "dig",        "do",    "draw",   "drink",
        "drive", "eat",    "fall",    "feed",       "feel",  "fight",  "find",
        "fly",   "forget", "forgive", "freeze",     "get",   "give",   "go",
        "grow",  "hang",   "have",    "hear",       "hide",  "hit",    "hold",
        "hurt",  "keep",   "know",    "lay",        "lead",  "leave",  "lend",
        "let",   "lie",    "light",   "lose",       "make",  "mean",   "meet",
        "pay",   "put",    "read",    "ride",       "ring",  "rise",   "run",
        "say",   "see",    "seek",    "sell",       "send",  "set",    "shake",
        "shine", "shoot",  "show",    "shut",       "sing",  "sink",   "sit",
        "sleep", "speak",  "spend",   "stand",      "steal", "stick",  "strike",
        "swear", "sweep",  "swim",    "swing",      "take",  "teach",  "tear",
        "tell",  "think",  "throw",   "understand", "wake",  "wear",   "win",
        "write"};

int main()
{
    int random;
    random = randomize(random);
    char check[16];
    int error_ps = 0;
    int error_pp = 0;
    printf("Hi,u word --> %s\n", infinitive[random]);
    printf("Please enter %s to past simple\n", infinitive[random]);
    check[16] = enter(check); // enter ps
    lower(check);
    error_ps = check_ps(check, error_ps, random); // check ps
    printf("Please enter %s to past participle\n", infinitive[random]);
    check[16] = enter(check); // enter pp
    lower(check);
    error_pp = check_pp(check, error_pp, random); // check pp
    // printf("\nmain -->%s",check);
    printf("error_ps --> %d\n", error_ps);
    printf("error_pp --> %d\n", error_pp);
}
