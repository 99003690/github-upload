#include "unity.h"
#include "unity_internals.h"
#include"Armstrong.h"
#include"test_armstrong.h"

void setUp (void) {} /* Is run before every test, put unit init calls here. */
void tearDown (void) {} /* Is run after every test, put unit clean-up calls here. */
void test_armstrong(void)
{

    TEST_ASSERT_EQUAL_INT(0,Armstrong(70));
    TEST_ASSERT_EQUAL_INT(0,Armstrong(153));
}
int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_armstrong);
    return UNITY_END();
}
