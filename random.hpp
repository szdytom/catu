#ifndef RANDOM_H
#define RANDOM_H

#include <cstdlib>
#include <time.h>
#include "tools.hpp"

namespace catu {

bool __random_inited = 0;

inline void rand_init() {
	srand((unsigned)time(0));
}

// make a random interger length len
template <class T>
struct random_base {
	random_base () {
		if (!__random_inited) {
			srand((unsigned)time(NULL));
			__random_inited = 1;
		}
	}

	T operator () (unsigned int len) {
		T res = rand() % 9 + 1;
		for (int i = 1; i < len; ++i) {
			res = res * 10 + (rand() & 9);
		}
		return res;
	}
};

template <typename T>
T random(unsigned int len) {
	random_base<T> r;
	return r(len);
}

// make a random interger in [left, right]
template <typename T> 
T rrange(T left, T right) {
	T x = random<T>(intlen(right));
	return x % (right - left + 1) + left;
}

}

#endif
