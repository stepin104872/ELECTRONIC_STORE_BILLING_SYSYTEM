#include "unity.h"
#include "esb.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_login(void)
{
  TEST_ASSERT(login());
}
void test_calculation(void)
{
  TEST_ASSERT(calculation());
}
void test_bill(void)
{
  TEST_ASSERT(bill());
}

int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_login);
  RUN_TEST(test_calculation);
  RUN_TEST(test_bill);

  /* Close the Unity Test Framework */
  return UNITY_END();
}
