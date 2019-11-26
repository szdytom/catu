#ifndef RANDOM_H
#define RANDOM_H

#include <cstdlib>
#include <ctime>
#include <sstream>
#include "tools.h"

namespace catu {

void rand_init() {
	srand((unsigned)time(NULL));
}

// make a random interger length len
template<typename T> 
T random(unsigned int len) {
	T res = 0;
	for (int i = 1; i <= len; ++i) {
		res = res * 10 + rand() % 9 + 1;
	}
	return res;
}

// make a random interger in [left, right]
template <typename T> 
T rrange(T left, T right) {
	T x = random(catu::intlen(right));
	return x % (right - left + 1) + left;
}

}

#endif
