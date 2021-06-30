#include<iostream>
#define OFFSET "\t\t\t\t\t"
using namespace std;
void main()
{
	setlocale(LC_ALL, "Russian");
	//cout << false << endl;
	cout << OFFSET << "Типы данных в С++" << endl;
	cout << "boolean: " << sizeof(bool) << " " << "bytes" << endl;
	cout << "Возможные значения " << false << " или " << true << endl << endl;
	cout << "char: " << sizeof(char) << " " << "bytes" << endl;
	cout << "signed char: " << CHAR_MIN << "..." << CHAR_MAX << endl;
	cout << "unsigned char: " << 0 << "..." << UCHAR_MAX << endl << endl;
	cout << "short: " << sizeof(short) << " " << "bytes" << endl;
	cout << "signed short: " << SHRT_MIN << "..." << SHRT_MAX << endl;
	cout << "unsigned short: " << 0 << "..." << USHRT_MAX << endl << endl;
	cout << "long: " << sizeof(long) << " " << "bytes" << endl;
	cout << "signed long: " << LONG_MIN << "..." << LONG_MAX << endl;
	cout << "unsigned long: " << 0 << "..." << ULONG_MAX << endl << endl;
	cout << "int: " << sizeof(int) << " " << "bytes" << endl;
	cout << "signed int: " << INT32_MIN << "..." << INT32_MAX << endl;
	cout << "unsigned int: " << 0 << "..." << UINT32_MAX << endl << endl;
	cout << "long long: " << sizeof(long long) << " " << "bytes" << endl;
	cout << "signed long long: " << LLONG_MIN << "..." << LLONG_MAX << endl;
	cout << "unsigned long long: " << 0 << "..." << ULLONG_MAX << endl << endl;
	cout << "float: " << sizeof(float) << " " << "bytes" << endl;
	cout << "float: " << FLT_MIN << "..." << FLT_MAX << endl << endl;
	cout << "double: " << sizeof(double) << " " << "bytes" << endl;
	cout << "double: " << DBL_MIN << "..." << DBL_MAX << endl<<endl;
	cout << "short int: " << sizeof(short int) << " " << "bytes" << endl;
	cout << "signed short int: " << INT16_MIN << "..." << INT16_MAX << endl;
	cout << "unsigned short int: " << 0 << "..." << UINT16_MAX << endl << endl;
	cout << "long int: " << sizeof(long int) << " " << "bytes" << endl;
	cout << "signed long int: " << INT32_MIN << "..." << INT32_MAX << endl;
	cout << "unsigned long int: " << 0 << "..." << UINT32_MAX << endl << endl;



}
