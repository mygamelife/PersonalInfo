#include <stdio.h>
#include "PersonalInfo.h"


int setAge(PersonInfo *info , int age)
{
	info->age = age;
	
    if(info->age > 130) //check if age greater than 130
	return 0;
	
	else if(info->age < 0) //check if age is negative value
	return 0;
			
	else
	return 1;
}

int setHeight(PersonInfo *info , float height)
{
	info->height = height;
	
	if(info->height > 3) //check meters if it is greater than 3
	return 0;
	
	else if(info->height <= 0) //if less than or equal 0
	return 0;
	
	else
	return 1;
}

int setTelephone(PersonInfo *info , unsigned long int telephone)
{
	info->telephone = telephone;
	
	if((info->telephone/10000000)==0) //check if telephone is leading zero
	return 0;
	
	else if((info->telephone/10000000)>9) //check if telephone is 8-digit long
	return 0;
	
	else
	return 1;
}

int setFirstName(PersonInfo *info, char *name)
{
	int i=0, char_size=0;
	if(name[0] == '\0')
	return 0;
	
	else if(name[0] != '\0') 
	{
		while(name[i] != '\0') //read character from buffer until terminate '\0' is found
		{
			char_size++; //update character size
			i++; //update while loop
		}
		
		if(char_size < 21) //if character size less than 21 is valid
		info->firstName = name; //insert name into struct firstname
		return 1;	
	}
	
	else
		return 0; //else invalid
}
