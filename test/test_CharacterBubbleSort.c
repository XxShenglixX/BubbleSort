#include "unity.h"
#include "CharacterBubbleSort.h"

void setUp(void)
{
}

void tearDown(void)
{
}


void test_characterCompare_a_A_should_return_1()
{
	char alpha1 = 'a' ,alpha2 = 'A' ;
	TEST_ASSERT_EQUAL(1,characterCompare(&alpha1,&alpha2));
}

void test_characterCompare_a_a_should_return_0()
{
	char alpha1 = 'a' ,alpha2 = 'a' ;
	TEST_ASSERT_EQUAL(0,characterCompare(&alpha1,&alpha2));
}

void test_characterCompare_a_b_should_return_0()
{
	char alpha1 = 'a' ,alpha2 = 'b' ;
	TEST_ASSERT_EQUAL(-1,characterCompare(&alpha1,&alpha2));
}

void test_characterSwap_a_b_should_return_b_a()
{
	char array[] = {'a','b'};
	
	characterSwap(&array,0,1);
	
	TEST_ASSERT_EQUAL('b',array[0]);
	TEST_ASSERT_EQUAL('a',array[1]);
}

void test_characterSwap_a_b_should_do_nothing()
{
	char array[] = {'a','b'};
	
	characterSwap(&array,0,0);
	
	TEST_ASSERT_EQUAL('a',array[0]);
	TEST_ASSERT_EQUAL('b',array[1]);
}

void test_singleCharacterBubbleSort_given_c_a_b_should_return_a_c_b()
{
	char array[] = {'c','a','b'};
	int size = 3 ,length = 3;
	
	singleCharacterBubbleSort(&array,size,length);
	
	TEST_ASSERT_EQUAL('a',array[0]);
	TEST_ASSERT_EQUAL('c',array[1]);
	TEST_ASSERT_EQUAL('b',array[2]);
}

void test_singleCharacterBubbleSort_given_c_a_b_should_do_nothing()
{
	char array[] = {'c','a','b'};
	int size = 2 ,length = 3;
	
	singleCharacterBubbleSort(&array,size,length);
	
	TEST_ASSERT_EQUAL('c',array[0]);
	TEST_ASSERT_EQUAL('a',array[1]);
	TEST_ASSERT_EQUAL('b',array[2]);
}

void test_CharacterBubbleSort_give_a_A_B_c_should_return_A_B_a_c()
{
	char array[] = {'a','A','B','c'};
	int length = 4;
	
	CharacterBubbleSort(&array,length);
	
	TEST_ASSERT_EQUAL('A',array[0]);
	TEST_ASSERT_EQUAL('B',array[1]);
	TEST_ASSERT_EQUAL('a',array[2]);
	TEST_ASSERT_EQUAL('c',array[3]);
}

void test_CharacterBubbleSort_give_a_A_should_return_A_a()
{
	char array[] = {'a','A'};
	int length = 2;
	
	CharacterBubbleSort(&array,length);
	
	TEST_ASSERT_EQUAL('A',array[0]);
	TEST_ASSERT_EQUAL('a',array[1]);
}

void test_CharacterBubbleSort_give_a_A_size_1_should_do_nothing()
{
	char array[] = {'a','A'};
	int length = 1;
	
	CharacterBubbleSort(&array,length);
	
	TEST_ASSERT_EQUAL('a',array[0]);
	TEST_ASSERT_EQUAL('A',array[1]);
}

void test_CharacterBubbleSort_give_a_A_size_0_should_do_nothing()
{
	char array[] = {'a','A'};
	int length = 0;
	
	CharacterBubbleSort(&array,length);
	
	TEST_ASSERT_EQUAL('a',array[0]);
	TEST_ASSERT_EQUAL('A',array[1]);
}