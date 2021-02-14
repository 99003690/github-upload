#include "unity.h"
#include "unity_internals.h"
#include"Armstrong.h"
#include"test_armstrong.h"

void setUp (void) {} /* Is run before every test, put unit init calls here. */
void tearDown (void) {} /* Is run after every test, put unit clean-up calls here. */

void test_binary_decimal1(void)
{
    TEST_ASSERT_EQUAL_INT(26,binary_decimal(11010)); // maximum 5 digit number of 0's and 1's can be taken
}
void test_binary_decimal2(void)
{
    TEST_ASSERT_EQUAL_INT(17,binary_decimal(10001)); // maximum 5 digit number of 0's and 1's can be taken
}
int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_binary_decimal1);
    RUN_TEST(test_binary_decimal2);
    return UNITY_END();
}
