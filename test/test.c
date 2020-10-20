#include <computing.h>
#include <ctest.h>
#include <string.h>

CTEST(LOWER_TEST, FIRST_TEST)
{
    int i = 0;
    char result[16] = "Hello";
    lower(result);
    char expected[16] = "hello";
    while (i < 16) {
        ASSERT_EQUAL(expected[i], result[i]);
        i++;
    }
}

CTEST(LOWER_TEST, SECOND_TEST)
{
    int i = 0;
    char result[16] = "NicKolA";
    lower(result);
    char expected[16] = "nickola";
    while (i < 16) {
        ASSERT_EQUAL(expected[i], result[i]);
        i++;
    }
}
