#include "unity.h"
#include "IntegerBubbleSort.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_integerCompare_3_2_should_return_1()
{
	int v1 = 3,v2 = 2;
	TEST_ASSERT_EQUAL(1,integerCompare(&v1,&v2));
}

void test_integerCompare_2_2_should_return_0()
{
	int v1 = 2 ,v2 = 2;

	
	TEST_ASSERT_EQUAL(0,integerCompare(&v1,&v2));
}

void test_integerCompare_2_3_should_return_minus1()
{
	int v1 = 1 ,v2 = 2;

	TEST_ASSERT_EQUAL(-1,integerCompare(&v1,&v2));
}

void test_swap_1_2_should_return_2_1()
{
	int array[] = {1,2};
	
	integerSwap(array,0,1);
	
	TEST_ASSERT_EQUAL(2,array[0]);
	TEST_ASSERT_EQUAL(1,array[1]);
}