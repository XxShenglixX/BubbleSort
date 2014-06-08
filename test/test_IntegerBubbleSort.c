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
	int v1 = 0 ,v2 = 1;
	
	integerSwap(&array,v1,v2);
	
	TEST_ASSERT_EQUAL(2,array[v1]);
	TEST_ASSERT_EQUAL(1,array[v2]);
}

void test_swap_1_2_should_do_nothing()
{
	int array[] = {1,2};
	int v1 = 0 ,v2 = 0;
	
	integerSwap(&array,v1,v2);
	
	TEST_ASSERT_EQUAL(1,array[v1]);
	TEST_ASSERT_EQUAL(1,array[v2]);
}

void test_singleIntegerBubbleSort_given_3_2_1_should_return_1_3_2()
{
	int array[] = {3,2,1};
	int size = 3 ,length = 3;
	
	singleIntegerBubbleSort(&array,size,length);
	
	TEST_ASSERT_EQUAL(1,array[0]);
	TEST_ASSERT_EQUAL(3,array[1]);
	TEST_ASSERT_EQUAL(2,array[2]);
}

void test_singleIntegerBubbleSort_given_3_2_1_size_2_should_return_3_1_2()
{
	int array[] = {3,2,1};
	int size = 2 ,length = 3;
	
	singleIntegerBubbleSort(&array,size,length);
	
	TEST_ASSERT_EQUAL(3,array[0]);
	TEST_ASSERT_EQUAL(1,array[1]);
	TEST_ASSERT_EQUAL(2,array[2]);
}

void test_IntegerBubbleSort_given_8_5_1_4_2_should_return_1_2_4_5_8()
{
	int array[] = {8,5,1,4,2};
	int length = 5 ;
	
	IntegerBubbleSort(&array,length);
	
	TEST_ASSERT_EQUAL(1,array[0]);
	TEST_ASSERT_EQUAL(2,array[1]);
	TEST_ASSERT_EQUAL(4,array[2]);
	TEST_ASSERT_EQUAL(5,array[3]);
	TEST_ASSERT_EQUAL(8,array[4]);
}

void test_BubbleSort_99_negative10_0_should_return_negative10_99()
{
	int array[] = {99,-10};
	int length = 2;
	
	IntegerBubbleSort(&array,length);
	TEST_ASSERT_EQUAL(-10,array[0]);
	TEST_ASSERT_EQUAL(99,array[1]);
}


void test_IntegerBubbleSort_99_negative10_0_should_do_nothing()
{
	int array[] = {99,-10};
	int length = 1;
	
	IntegerBubbleSort(&array,length);
	TEST_ASSERT_EQUAL(99,array[0]);
	TEST_ASSERT_EQUAL(-10,array[1]);
}

void test_BubbleSort_99_negative10_0_given_empty_array_should_do_nothing()
{
	int array[] = {99,-10};
	int length = 0;
	
	IntegerBubbleSort(&array,length);
	TEST_ASSERT_EQUAL(99,array[0]);
	TEST_ASSERT_EQUAL(-10,array[1]);
}
