#include <cstdio>
#include "testlib.h"
#include "../random.hpp"
using namespace std;
using namespace catu;

int main() {
	// rand_init();
	test_init(4);

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

	//#4
	int a1, a2;
	a1 = random<int>(5);
	a2 = random<int>(5);
	if (a1 == a2) test_fail("Same Answer of random.(int) #4");
	else testok();

	stop_test();
	return 0;
}