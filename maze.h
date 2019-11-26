#ifndef MAZE_H
#define MAZE_H

#include <vector>
#include "random.h"

namespace catu
{

template <typename T>
class maze
{
private:
	void dfs()
	{
		
	}
public:
	std::vector<std::vector<T> > maze;
	unsigned int size()
	{
		unsigned int res = 0;
		for (unsigned int i = 0; i < maze.size(); i ++) res += maze[i].size();
		return res;
	}
	void build_rand(int l, int r, std::vector<T> able)
	{
		catu::rand_init();
		for (int i = 0; i < l; i ++)
		{
			std::vector<T> tmp;
			for (int j = 0; j < r; j ++)
				tmp.push_back(able[catu::rrange(0, able.size() - 1)]);
			maze.push_back(tmp);
		}
	}
	void build_road(int start_x, int start_y, int end_x, int end_y, T road, T wall, std::vector<T> able)
	{
	}
	void clear()
	{
		for (int i = 0; i < maze.size(); i ++)
			maze[i].clear();
	}
};

}

#endif