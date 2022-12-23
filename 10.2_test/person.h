#pragma once
#include<iostream>
#include<string>
using std::string;
class Person
{
public:
	Person() { lname = " ", fname[0] = '\0'; };
	Person(const string &ln, const char* fn = "Heyyon");
	void show()const;//first name,last name format
	void FormalShow()const;
	~Person();

private:
	static const int LIMIT = 25;//静态成员变量
	string lname;
	char fname[LIMIT];
};


