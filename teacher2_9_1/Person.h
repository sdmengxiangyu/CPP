#include "Date.h"

#ifndef PERSON 
#define PERSON 

class Person
{
private:
	char number[10];
	char name[10];
	char id[10];
	Date birthday;
	char sex;
public:
	Person();
	~Person();
	void setData();
	void getData();
};

#endif