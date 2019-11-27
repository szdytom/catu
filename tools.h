#ifndef TOOLS_H
#define TOOLS_H

#include <math.h>

namespace catu {
	
// count the length of an interger
template <typename T> 
T intlen(T x) {
	T res = 0;
	while (x > 0) {
		res += 1; //some T may not support ++res or res++
		x /= 10;
	}
	return res;
}

// check prime
template <typename T>
bool is_prime(T x)
{
	for (int i = 2; i <= sqrt(x); i ++)
		if (x % i == 0) return false;
	return true;
}

}

#endif