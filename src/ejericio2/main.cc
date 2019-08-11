// A C++ program for Dijkstra's single source shortest path algorithm. 
// The program is for adjacency matrix representation of the graph 

#include <stdio.h> 
#include <limits.h> 
#include<iostream>
#include "Dijkstra.hh"


int main() 
{ 
    int graph[V][V] = {{0, 4, 0, 0, 0, 0, 0, 8, 0}, 
                        {4, 0, 8, 0, 0, 0, 0, 11, 0}, 
                        {0, 8, 0, 7, 0, 4, 0, 0, 2}, 
                        {0, 0, 7, 0, 9, 14, 0, 0, 0}, 
                        {0, 0, 0, 9, 0, 10, 0, 0, 0}, 
                        {0, 0, 4, 14, 10, 0, 2, 0, 0}, 
                        {0, 0, 0, 0, 0, 2, 0, 1, 6}, 
                        {8, 11, 0, 0, 0, 0, 1, 0, 7}, 
                        {0, 0, 2, 0, 0, 0, 6, 7, 0} 
                        }; 

	Dijkstra dijkstra = *new Dijkstra(graph, 0); 
    dijkstra.calculate();

    std::getchar();
	return 0; 
} 
