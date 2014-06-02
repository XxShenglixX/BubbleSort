#include "unity.h"
#include "BubbleSort.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_swap_1_should_do_nothing()
{
	int array[] = {1};
	
	swap(array,1,1);
	TEST_ASSERT_EQUAL(1,array[0]);
	
}

void test_swap_1_2_should_return_2_1()
{
	int array[] = {1,2};
	
	swap(array,0,1);
	TEST_ASSERT_EQUAL(2,array[0]);
	TEST_ASSERT_EQUAL(1,array[1]);
	
}

void test_swap_1_2_should_do_nothing()
{
	int array[] = {1,2};
	
	swap(array,1,1);
	TEST_ASSERT_EQUAL(1,array[0]);
	TEST_ASSERT_EQUAL(2,array[1]);
	
}

void test_single_BubbleSort_100_5_should_return_5_100()
{
	int array[] = {100,5};
	
	singleBubbleSort(array,2,2);
	TEST_ASSERT_EQUAL(5,array[0]);
	TEST_ASSERT_EQUAL(100,array[1]);

}

void test_single_BubbleSort_8_5_1_4_2_should__return_1_8_5_2_4()
{
	int array[] = {8,5,1,4,2};
	
	singleBubbleSort(array,5,5);
	TEST_ASSERT_EQUAL(1,array[0]);
	TEST_ASSERT_EQUAL(8,array[1]);
	TEST_ASSERT_EQUAL(5,array[2]);
	TEST_ASSERT_EQUAL(2,array[3]);
	TEST_ASSERT_EQUAL(4,array[4]);
}

void test_single_BubbleSort_100_5_3_1_and_size_of_3_should_return_100_1_5_3()
{
	int array[] = {100,5,3,1};
	
	singleBubbleSort(array,3,4);
	TEST_ASSERT_EQUAL(100,array[0]);
	TEST_ASSERT_EQUAL(1,array[1]);
	TEST_ASSERT_EQUAL(5,array[2]);
	TEST_ASSERT_EQUAL(3,array[3]);
}


void test_BubbleSort_8_5_1_4_2_should_return_1_2_4_5_8()
{
	int array[] = {8,5,1,4,2};
	
	bubbleSort(array,5);
	TEST_ASSERT_EQUAL(1,array[0]);
	TEST_ASSERT_EQUAL(2,array[1]);
	TEST_ASSERT_EQUAL(4,array[2]);
	TEST_ASSERT_EQUAL(5,array[3]);
	TEST_ASSERT_EQUAL(8,array[4]);
}

void test_BubbleSort_99_negative10_0_8__4_should_return_negative10_0_4_8_99()
{
	int array[] = {99,-10,0,8,4};
	
	bubbleSort(array,5);
	TEST_ASSERT_EQUAL(-10,array[0]);
	TEST_ASSERT_EQUAL(0,array[1]);
	TEST_ASSERT_EQUAL(4,array[2]);
	TEST_ASSERT_EQUAL(8,array[3]);
	TEST_ASSERT_EQUAL(99,array[4]);
}

void test_BubbleSort_99_negative10_0_should_return_negative10_99()
{
	int array[] = {99,-10};
	
	bubbleSort(array,2);
	TEST_ASSERT_EQUAL(-10,array[0]);
	TEST_ASSERT_EQUAL(99,array[1]);
}

void test_BubbleSort_99_negative10_0_should_do_nothing()
{
	int array[] = {99,-10};
	
	bubbleSort(array,1);
	TEST_ASSERT_EQUAL(99,array[0]);
	TEST_ASSERT_EQUAL(-10,array[1]);
}

void test_BubbleSort_99_negative10_0_given_empty_array_should_do_nothing()
{
	int array[] = {99,-10};
	
	bubbleSort(array,0);
	TEST_ASSERT_EQUAL(99,array[0]);
	TEST_ASSERT_EQUAL(-10,array[1]);
}



