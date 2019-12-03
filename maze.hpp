#ifndef MAZE_H
#define MAZE_H

#include <vector>
#include "fatal.hpp"
#include "random.hpp"

namespace catu
{

template <typename T>
class maze
{
private:
	int dir_four[4][2] = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};
	int dir_eight[8][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}, {1, 1}, {-1, -1}, {-1, 1}, {1, -1}};
	int sx;
	int sy;
	bool vis[l_size() + 10][r_size() + 10];
	void dfs_four(int x, int y)
	{
		
	}
	void dfs_eight(int x, int y)
	{

	}
public:
	std::vector<std::vector<T> > maze;
	unsigned int l_size()
	{
		return maze.size();
	}
	unsigned int r_size()
	{
		unsigned int res = 0;
		for (int i = 0; i < l_size(); i ++)
			res = max(res, maze[i].size());
		return res;
	}
	unsigned int size()
	{
		unsigned int res = 0;
		for (unsigned int i = 0; i < maze.size(); i ++) res += maze[i].size();
		return res;
	}
	void build_rand(int row, int col, std::vector<T> able)
	{
		rand_init();
		for (int i = 0; i < row; i ++)
		{
			std::vector<T> tmp;
			for (int j = 0; j < col; j ++)
				tmp.push_back(able[rrange(0, able.size() - 1)]);
			maze.push_back(tmp);
		}
	}
	void clear() // clear the maze
	{
		for (int i = 0; i < maze.size(); i ++)
			maze[i].clear();
	}
	void build_road(int start_x, int start_y, int end_x, int end_y, T road, T wall, int direction, std::vector<T> able)
	{
		std::vector<int> tmp;
		tmp.push_back(wall);
		build_rand(l, r, tmp);
		if (direction == 4) dfs_four();
		else if (direction == 8) dfs_eight();
		else output_fatal("not able directions");
	}
};

}

#endif