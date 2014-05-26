#ifndef PersonalInfo_H
#define PersonalInfo_H

typedef struct PersonInfo_t //basic data structure consist of name(fist/last),age,height,telephone
{
	char firstName[21];
	char lastName[21];
	int age;
	float height;
	unsigned long int telephone;
} PersonInfo;

int setAge(PersonInfo *info , int age);

#endif // PersonalInfo_H
