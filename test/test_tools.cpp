#include <cstdio>
#include "testlib.h"
#include "../tools.h"
#include "../random.h"
using namespace std;
using namespace catu;

bool mis_prime(int x) {
	for (int i = 1; i <= x / 2; ++i) {
		if (x % i == 0) return 0;
	}
	return 1;
}

int main() {
	test_init(20);

	int x;
	// #1
	x = intlen(123456);
	if (x == 6) testok();
	else test_fail("Error at intlen.");

	// #2
	x = intlen(12345687987LL);
	if (x == 11) testok();
	else test_fail("Error at intlen.");

	// #3 - #20
	for (int i = 3; i <= 20; ++i) {
		int num = rrange(10, 1000000);
		if (is_prime(num) ^ mis_prime(num)) test_fail("Error at is_prime. ")
	}

	stop_test();
	return 0;
}