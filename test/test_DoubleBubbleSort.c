#include "unity.h"
#include "DoubleBubbleSort.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_doubleCompare_3_01_and_3_00_should_return_1()
{
	double v1 = 3.01,v2 = 3.00;
	TEST_ASSERT_EQUAL(1,doubleCompare(&v1,&v2));
}

void test_doubleCompare_2_05_and_2_05_should_return_0()
{
	double v1 = 2.05 ,v2 = 2.05;

	
	TEST_ASSERT_EQUAL(0,doubleCompare(&v1,&v2));
}

void test_doubleCompare_1_9_and_2_0_should_return_minus1()
{
	double v1 = 1.9 ,v2 = 2.0;

	TEST_ASSERT_EQUAL(-1,doubleCompare(&v1,&v2));
}

void test_swap_1_1_and_2_20_should_return_2_1()
{
	double array[] = {1.1,2.20};
	int v1 = 0 ,v2 = 1;
	
	doubleSwap(&array,v1,v2);
	
	TEST_ASSERT_EQUAL(2.20,array[v1]);
	TEST_ASSERT_EQUAL(1.1,array[v2]);
}

void test_swap_1_1_and_2_2_should_do_nothing()
{
	double array[] = {1.1,2.2};
	int v1 = 0 ,v2 = 0;
	
	doubleSwap(&array,v1,v2);
	
	TEST_ASSERT_EQUAL(1.1,array[v1]);
	TEST_ASSERT_EQUAL(1.1,array[v2]);
}

void test_singleDoubleBubbleSort_given_1_3_and_1_2_and_1_1_should_return_1_1_and_1_3_and_1_2()
{
	double array[] = {1.3,1.2,1.1};
	int size = 3 ,length = 3;
	
	singleDoubleBubbleSort(&array,size,length);
	
	TEST_ASSERT_EQUAL(1.1,array[0]);
	TEST_ASSERT_EQUAL(1.3,array[1]);
	TEST_ASSERT_EQUAL(1.2,array[2]);
}

void test_singleDoubleBubbleSort_given_1_3_and_1_2_and_1_1_size_2_should_return_1_3_and_1_1_and_1_2()
{
	double array[] = {1.3,1.2,1.1};
	int size = 2 ,length = 3;
	
	singleDoubleBubbleSort(&array,size,length);
	
	TEST_ASSERT_EQUAL(1.3,array[0]);
	TEST_ASSERT_EQUAL(1.1,array[1]);
	TEST_ASSERT_EQUAL(1.2,array[2]);
}

void test_DoubleBubbleSort_given_3_0_and_2_5_and_3_05_and_2_49_and_7_22_should_return_2_49_and_2_5_and_3_0_and_3_05_and_7_22()
{
	double array[] = {3.0,2.5,3.05,2.49,7.22};
	int length = 5 ;
	
	DoubleBubbleSort(&array,length);
	
	TEST_ASSERT_EQUAL(2.49,array[0]);
	TEST_ASSERT_EQUAL(2.5,array[1]);
	TEST_ASSERT_EQUAL(3.0,array[2]);
	TEST_ASSERT_EQUAL(3.05,array[3]);
	TEST_ASSERT_EQUAL(7.22,array[4]);
}

void test_DoubleBubbleSort_0_01_and_negative_0_01_should_return_negative_0_01_and_0_01()
{
	double array[] = {0.01,-0.01};
	int length = 2;
	
	DoubleBubbleSort(&array,length);
	TEST_ASSERT_EQUAL(-0.01,array[0]);
	TEST_ASSERT_EQUAL(0.01,array[1]);
}


void test_DoubleBubbleSort_0_01_and_negative_0_01_should_do_nothing()
{
	double array[] = {0.01,-0.01};
	int length = 1;
	
	DoubleBubbleSort(&array,length);
	TEST_ASSERT_EQUAL(0.01,array[0]);
	TEST_ASSERT_EQUAL(-0.01,array[1]);
}

void test_DoubleBubbleSort_0_01_and_negative_0_01_given_empty_array_should_do_nothing()
{
	double array[] = {0.01,-0.01};
	int length = 0;
	
	DoubleBubbleSort(&array,length);
	TEST_ASSERT_EQUAL(0.01,array[0]);
	TEST_ASSERT_EQUAL(-0.01,array[1]);
}
