#include "unity.h"
#include "unity_internals.h"
#include"palindrome.h"
#include"test_palindrome.h"

/* Is run after every test, put unit clean-up calls here. */
void test_palindrome(void)
{

    TEST_ASSERT_EQUAL_INT(0,palindrome(70));
    TEST_ASSERT_EQUAL_INT(1,palindrome(121));
}
int main1(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_palindrome);
    return UNITY_END();
}
