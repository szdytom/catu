#ifndef TOOLS_H
#define TOOLS_H

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

}

#endif