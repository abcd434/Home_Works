#include "iostream"
#include "matrixsort.h"
#include "matrixtest.h"
#include "stdlib.h"

using namespace std;

int main()
{
	MatrixTest test;
	QTest::qExec(&test);
	return 0;
}
