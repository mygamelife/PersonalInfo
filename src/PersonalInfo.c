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
	int count = 0; //counter
	info->height = height;
	
	for(info->height ; info->height > 0 ; count++)
	{
		info->height / 10;
	}
	
	return count;	
}


