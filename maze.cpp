#include "random.h"

template <typename T>
class maze
{
public:
	std::vector<std::vector<T> > __maze_two;
	unsigned int size()
	{
		unsigned int __res = 0;
		for (unsigned int i = 0; i < __maze_two.size(); i ++) __res += __maze_two[i].size();
		return __res;
	}
	void __make_rand(int l, int r)
	{
		for (int i = 0; i < )
	}
};