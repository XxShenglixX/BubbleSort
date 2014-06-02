#include "unity.h"
#include "FunctionPointer.h"

void setUp(void)
{
}

void tearDown(void)
{
}

int add(int v1,int v2)
{
	return v1+v2;
}

/**
 * v1 = (v1+v2) * v3
 */


void addThenMultiply(void *v1,void *v2, void *v3,	
					 void ptrAdd(void *v1, void *v2),
					 void ptrMul(void *v1, void *v2))
{
	ptrAdd(v1,v2);
	ptrMul(v1,v3);
}					

void addInteger(void *v1, void *v2)
{
	int *value1 =(int *)v1;
	int *value2 =(int *)v2;
	
	*value1 = *value1 + *value2;
}

void mulInteger(void *v1, void *v2)
{
	int *value1 =(int *)v1;
	int *value2 =(int *)v2;
	
	*value1 = *value1 * *value2;
}

void addDouble(void *v1, void *v2)
{
	double *value1 =(double *)v1;
	double *value2 =(double *)v2;
	
	*value1 = *value1 + *value2;
}

void mulDouble(void *v1, void *v2)
{
	double *value1 =(double *)v1;
	double *value2 =(double *)v2;
	
	*value1 = *value1 * *value2;
}


void test_addThenMultiply_given_2plus_3_times_4_should_get_20(void)
{
 int v1 =2 ,v2 = 3, v3 =4;
 
 addThenMultiply(&v1,&v2,&v3,addInteger,mulInteger);
 printf("v1 is %d\n",v1);
}

void test_addThenMultiply_given_2p3_plus_3p4_times_4p5_should_get_xxx(void)
{
 double v1 =2.3 ,v2 = 3.4, v3 =4.5;
 
 addThenMultiply(&v1,&v2,&v3,addDouble,mulDouble);
 printf("v1 is %f\n",v1);
}


void test_explore_function_pointer(void)
{
	int val = 0;
	int *p;
	int (*ptr2Func)(int v1,int v2);
	
	p = &val;
	*p = 20;
	printf("val :%d\n",val);
	
	ptr2Func = add;
	printf("2 + 3: %d\n",add(2,3));
	printf("6 + 7: %d\n",ptr2Func(6,7));
}
