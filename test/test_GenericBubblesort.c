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

void test_integer_genericSingleBubbleSort_given_8_6_1_size_2_should_return_8_1_6()
{
	int array[] = {8,6,1};
	int size = 2,length = 3;
	genericSingleBubbleSort(&array,size,length,&integerCompare,&integerSwap);
		
	TEST_ASSERT_EQUAL(8,array[0]);
	TEST_ASSERT_EQUAL(1,array[1]);
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

void test_double_genericSingleBubbleSort_given_3_5_and_3_43_and_2_94_size_2_should_return_3_5_and_2_94_and_3_43()
{
	double array[] = {3.5,3.43,2.94};
	int size = 2,length = 3;
	genericSingleBubbleSort(&array,size,length,&doubleCompare,&doubleSwap);
	
	TEST_ASSERT_EQUAL(3.5,array[0]);
	TEST_ASSERT_EQUAL(2.94,array[1]);
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

void test_char_genericSingleBubbleSort_given_c_a_A_size_2should_return_c_A_a()
{
	char array[] = {'c','a','A'};
	int size = 2,length = 3;
	genericSingleBubbleSort(&array,size,length,&characterCompare,&characterSwap);
	
	TEST_ASSERT_EQUAL('c',array[0]);
	TEST_ASSERT_EQUAL('A',array[1]);
	TEST_ASSERT_EQUAL('a',array[2]);
}

void test_integer_genericBubbleSort_given_8_6_1_should_return_1_6_8()
{
	int array[] = {8,6,1};
	int length = 3;
	genericBubbleSort(&array,length,&integerCompare,&integerSwap);
		
	TEST_ASSERT_EQUAL(1,array[0]);
	TEST_ASSERT_EQUAL(6,array[1]);
	TEST_ASSERT_EQUAL(8,array[2]);
}

void test_integer_genericBubbleSort_given_10_minus99_should_return_minus99_10()
{
	int array[] = {10,-99};
	int length = 2;
	genericBubbleSort(&array,length,&integerCompare,&integerSwap);
		
	TEST_ASSERT_EQUAL(-99,array[0]);
	TEST_ASSERT_EQUAL(10,array[1]);
}

void test_integer_genericBubbleSort_given_10_minus99_length_1_should_do_nothing()
{
	int array[] = {10,-99};
	int length = 1;
	genericBubbleSort(&array,length,&integerCompare,&integerSwap);
		
	TEST_ASSERT_EQUAL(10,array[0]);
	TEST_ASSERT_EQUAL(-99,array[1]);
}

void test_double_genericBubbleSort_given_3_5_and_3_43_and_2_94_should_return_2_94_and_3_43_and_3_5()
{
	double array[] = {3.5,3.43,2.94};
	int length = 3;
	genericBubbleSort(&array,length,&doubleCompare,&doubleSwap);
	
	TEST_ASSERT_EQUAL(2.94,array[0]);
	TEST_ASSERT_EQUAL(3.43,array[1]);
	TEST_ASSERT_EQUAL(3.5,array[2]);
}

void test_double_genericBubbleSort_given_0_011_and_0_01__should_return_0_01_and_0_011()
{
	double array[] = {0.011,0.01};
	int length = 2;
	genericBubbleSort(&array,length,&doubleCompare,&doubleSwap);
	
	TEST_ASSERT_EQUAL(0.01,array[0]);
	TEST_ASSERT_EQUAL(0.011,array[1]);
}

void test_double_genericBubbleSort_given_0_011_and_0_01__length_1_should_do_nothing()
{
	double array[] = {0.011,0.01};
	int length = 1;
	genericBubbleSort(&array,length,&doubleCompare,&doubleSwap);
	
	TEST_ASSERT_EQUAL(0.011,array[0]);
	TEST_ASSERT_EQUAL(0.01,array[1]);
}

void test_char_genericBubbleSort_given_c_a_A_should_return_A_a_c()
{
	char array[] = {'c','a','A'};
	int length = 3;
	genericBubbleSort(&array,length,&characterCompare,&characterSwap);
	
	TEST_ASSERT_EQUAL('A',array[0]);
	TEST_ASSERT_EQUAL('a',array[1]);
	TEST_ASSERT_EQUAL('c',array[2]);
}

void test_char_genericBubbleSort_given_question_dot_should_return_dot_question()
{
	// ? dec 63 , . dec 46

	char array[] = {'?','.'};
	int length = 2;
	genericBubbleSort(&array,length,&characterCompare,&characterSwap);
	
	TEST_ASSERT_EQUAL('.',array[0]);
	TEST_ASSERT_EQUAL('?',array[1]);

}

void test_char_genericBubbleSort_given_question_length_1_dot_should_do_nothing()
{
	char array[] = {'?','.'};
	int length = 1;
	genericBubbleSort(&array,length,&characterCompare,&characterSwap);
	
	TEST_ASSERT_EQUAL('?',array[0]);
	TEST_ASSERT_EQUAL('.',array[1]);

}
