#ifndef GRAPH_H
#define GRAPH_H

#include <vector>
#include "random.hpp"

namespace catu {

template<class T>
class Edge {
public:
	int x, y;
	T w;

	Edge();

	Edge(int x, int y, T w) {
		this->x = x;
		this->y = y;
		this->w = w;
	}

	~Edge();	
};

template<class T> 
class Graph {
public:
	std::vector<Edge> e;
	Graph();
	~Graph() {
		e.clear();
	}

	void graph(int n, int m, bool self_loop = 1, XYpair<T> weight_limit = XYpair<T>(1, 1), bool reapt_edge = 1) {

	}
};

}

#endif