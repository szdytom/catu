#ifndef TOOLS_H
#define TOOLS_H

#include <cmath>
#include "random.h"

namespace catu {

template<typename T> 
int ___fast_mr_p(T a, T n, T p) {
    T ret = 1;
    while (n > 0) {
        if (n % 2) ret = ret * a % p;
        n >>= 1;
        T x = a;
        a = a * a % p;
        if (a == 1 && x != 1 && x != p - 1) return 1;
    }
    return ret != 1;
}
	
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
bool is_prime(T n) {
	for(T i = 1; i <= 5 * log(n); ++i){
        T a = rrange(1, n - 1);
        if (___fast_mr_p(a, n - 1, n)) return 0;
    }
    return 1;
}

}

#endif