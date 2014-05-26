#include <stdio.h>
#include "PersonalInfo.h"


int setAge(PersonInfo *info , int age)
{
	info->age = age;
	
    if(info->age > 130)
	return 0;
	
	else if(info->age < 0)
	return 0;
			
	else
	return 1;
}

int setHeight(PersonInfo *info , float height)
{
	info->height = height;
	
	if(info->height > 3)
	return 0;
	
	else if(info->height <= 0)
	return 0;
	
	else
	return 1;
}
