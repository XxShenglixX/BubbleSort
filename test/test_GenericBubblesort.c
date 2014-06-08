#include "unity.h"
#include "GenericBubblesort.h"
#include "CharacterBubbleSort.h"
#include "DoubleBubbleSort.h"
#include "IntegerBubbleSort.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_integer_genericSingleBubbleSort_given_8_6_1_should_return_1_8_6()
{
	int array[] = {8,6,1};
	int size = 3,length = 3;
	genericSingleBubbleSort(&array,size,length,&integerCompare,&integerSwap);
		
	TEST_ASSERT_EQUAL(1,array[0]);
	TEST_ASSERT_EQUAL(8,array[1]);
	TEST_ASSERT_EQUAL(6,array[2]);
}

void test_double_genericSingleBubbleSort_given_3_5_and_3_43_and_2_94_should_return_2_94_and_3_5_and_3_43()
{
	double array[] = {3.5,3.43,2.94};
	int size = 3,length = 3;
	genericSingleBubbleSort(&array,size,length,&doubleCompare,&doubleSwap);
	
	TEST_ASSERT_EQUAL(2.94,array[0]);
	TEST_ASSERT_EQUAL(3.5,array[1]);
	TEST_ASSERT_EQUAL(3.43,array[2]);
}

void test_char_genericSingleBubbleSort_given_c_a_A_should_return_A_c_a()
{
	char array[] = {'c','a','A'};
	int size = 3,length = 3;
	genericSingleBubbleSort(&array,size,length,&characterCompare,&characterSwap);
	
	TEST_ASSERT_EQUAL('A',array[0]);
	TEST_ASSERT_EQUAL('c',array[1]);
	TEST_ASSERT_EQUAL('a',array[2]);
}