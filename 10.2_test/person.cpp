#define _CRT_SECURE_NO_WARNINGS 1
#include"person.h"
using std::string;
using std::cout;
using std::endl;
Person::Person(const string &ln, const char* fn)
{
	lname = ln;
	strcpy(fname, fn);
}
void Person::show()const
{
	cout<<"first name: "<<fname<<endl;
	cout << "last name: " << lname;
}
void Person::FormalShow()const
{
	cout << "last name: " << lname << endl;
	cout << "first name: " << fname;
}
Person::~Person()
{
	cout << fname << "   " << lname << "析构函数调用\n";
}