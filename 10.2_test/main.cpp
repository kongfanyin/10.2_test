#define _CRT_SECURE_NO_WARNINGS 1

#include"person.h"

#include<string>
#include<fstream>
#include<iostream>
using std::cout;
using std::endl;
int main(char argc, char** argv)
{
	Person one;
	Person two("smythe");
	Person three("Dimwiddy", "sam");
	one.show();
	cout << '\n';
	one.FormalShow();
	return 0;
}

