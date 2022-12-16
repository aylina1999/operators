
#include<iostream>
using namespace std;

#define ASSIGNMENT_OPERATOR

void main()
{
	setlocale(LC_ALL, "Rus");
	
	int i = 3;
	i  += ++i + ++i *= 2;
	cout << i << endl;
	
	 
}