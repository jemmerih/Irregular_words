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

CTEST(CHECK_PS_TEST, FIRST_TEST)
{
    int random = 0;
    char check[] = "beat";
    int result = 0;
    result = check_ps(check, result, random);
    char expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(CHECK_PS_TEST, SECOND_TEST)
{
    int random = 2;
    char check[] = "begun";
    int result = 0;
    result = check_ps(check, result, random);
    char expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(CHECK_PP_TEST, FIRST_TEST)
{
    int random = 0;
    char check[] = "beat";
    int result = 0;
    result = check_pp(check, result, random);
    char expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(CHECK_PP_TEST, SECOND_TEST)
{
    int random = 2;
    char check[] = "begun";
    int result = 0;
    result = check_pp(check, result, random);
    char expected = 0;
    ASSERT_EQUAL(expected, result);
}
