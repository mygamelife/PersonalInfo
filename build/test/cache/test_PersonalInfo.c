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



 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((ans)), (((void *)0)), (_U_UINT)19, UNITY_DISPLAY_STYLE_INT);

}



void test_age_negative_value_and_return_0(void)

{

 int ans;

 struct PersonInfo_t PersonInfo;



 ans = setAge(&PersonInfo,-40);



 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((ans)), (((void *)0)), (_U_UINT)29, UNITY_DISPLAY_STYLE_INT);

}



void test_age_largest_value_and_return_0(void)

{

 int ans;

 struct PersonInfo_t PersonInfo;



 ans = setAge(&PersonInfo,140);



 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((ans)), (((void *)0)), (_U_UINT)39, UNITY_DISPLAY_STYLE_INT);

}



void test_height_equal_to_3_and_return_1(void)

{

 int ans;

 struct PersonInfo_t PersonInfo;



 ans = setHeight(&PersonInfo,3);



 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((ans)), (((void *)0)), (_U_UINT)49, UNITY_DISPLAY_STYLE_INT);

}



void test_height_less_than_or_equal_zero_and_return_0(void)

{

 int ans;

 struct PersonInfo_t PersonInfo;



 ans = setHeight(&PersonInfo,0);



 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((ans)), (((void *)0)), (_U_UINT)59, UNITY_DISPLAY_STYLE_INT);

}
