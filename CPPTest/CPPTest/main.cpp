#include "IOTest/ScanfAndPrintfTest/ScanfTest.h"
#include <typeinfo>
#include <iostream>

using std::cout;
using std::endl;
using IOTest::ScanfTest;

int main() {
	ScanfTest();

	cout << typeid(1.2).name() << endl;

	system("pause");
	return 0;
}