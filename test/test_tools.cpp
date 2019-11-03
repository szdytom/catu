#include <cstdio>
#include "testlib.h"
#include "../tools.h"
using namespace std;
using namespace catu;

int main() {
	test_init(2);

	int x;
	// #1
	x = intlen(123456);
	if (x == 6) testok();
	else test_fail("Error at intlen.");

	// #2
	x = intlen(12345687987LL);
	if (x == 6) testok();
	else test_fail("Error at intlen.");

	stop_test();
	return 0;
}