#ifndef TEST_LIB_H
#define TEST_LIB_H
#include <time.h>
#include <cstdlib>
#include <stdarg.h>

int test_case;
time_t start_time;

void test_init(int n) {
	test_case = n;
	printf("[I]Test Start.\n\n");
	start_time = clock();
}

void stop_test() {
	time_t endt = clock();
	printf("\n[I]Time Used %ld ms.\n", endt - start_time);
}

void testok() {
	printf(".");
	--test_case;
}

void test_fail(char *s, ...) {
	va_list argp;	

	printf("E");
	--test_case;
	for (int i = 1; i <= test_case; ++i) {
		printf("S");
	}

	char msg[512];
	sprintf(s, argp);

	printf("\n[E]Error massage:\n%s\n", s);
	stop_test();
	printf("[E]abort\n");
	abort();
}

#endif