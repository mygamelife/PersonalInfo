#include "unity.h"
#include "PersonalInfo.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_age_range_and_return_1(void)
{	
	int ans;
	struct PersonInfo_t PersonInfo;
	
	ans = setAge(&PersonInfo,40);
	
	TEST_ASSERT_EQUAL(1 , ans);
}

void test_age_negative_value_and_return_0(void)
{	
	int ans;
	struct PersonInfo_t PersonInfo;
	
	ans = setAge(&PersonInfo,-40);
	
	TEST_ASSERT_EQUAL(0 , ans);
}

void test_age_largest_value_and_return_0(void)
{	
	int ans;
	struct PersonInfo_t PersonInfo;
	
	ans = setAge(&PersonInfo,140);
	
	TEST_ASSERT_EQUAL(0 , ans);
}

void test_height_equal_to_3_and_return_1(void)
{	
	int ans;
	struct PersonInfo_t PersonInfo;
	
	ans = setHeight(&PersonInfo,3);
	
	TEST_ASSERT_EQUAL(1 , ans);
}

void test_height_less_than_or_equal_zero_and_return_0(void)
{	
	int ans;
	struct PersonInfo_t PersonInfo;
	
	ans = setHeight(&PersonInfo,0);
	
	TEST_ASSERT_EQUAL(0 , ans);
}

void test_telephone_num_range_should_return_1(void)
{
	int ans;
	struct PersonInfo_t PersonInfo;
	
	ans = setTelephone(&PersonInfo,12556547);
	
	TEST_ASSERT_EQUAL(8 , ans);
}