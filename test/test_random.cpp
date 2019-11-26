#include <cstdio>
#include "testlib.h"
#include "../random.h"
using namespace std;
using namespace catu;

int main() {
	// rand_init();
	test_init(3);

	// #1
	int x = rrange(10, 20);
	if (x <= 20 && x >= 10) testok();
	else test_fail("rrange error. #1");

	//#2
	x = rrange(3, 3);
	if (x == 3) testok();
	else test_fail("rrange error. #2");

	//#3
	long long y = rrange((long long)(1e10), (long long)(1e11));
	if (y <= 1e11 && y >= 1e10) testok();
	else test_fail("rrange error.(long long) #3");

	stop_test();
	return 0;
}