#pragma once

#include <stdio.h> 
#include <limits.h> 
#include<iostream>
#include <cstring>

#define V 9 

class Dijkstra
{
    private:
        int graph[V][V];
        int src;
    public:
        int minDistance(int dist[], bool sptSet[]);
        int printSolution(int dist[], int n); 
        void calculate();
        Dijkstra(int graph[V][V], int src);
        ~Dijkstra();
};

Dijkstra::Dijkstra(int graph[V][V], int src)
{
    //this->graph = graph;
    for(int i = 0; i < V; i++)
    {
        for(int j = 0; j < V; j++)
        {
            this->graph[i][j] = graph[i][j];
        }
    }
    this->src = src;
}

Dijkstra::~Dijkstra()
{
}

int Dijkstra::minDistance(int dist[], bool sptSet[]) 
{ 
    int min = INT_MAX, min_index; 

    for (int v = 0; v < V; v++) 
        if (sptSet[v] == false && dist[v] <= min) 
            min = dist[v], min_index = v; 

    return min_index; 
} 

int Dijkstra::printSolution(int dist[], int n) 
{ 
    std::cout << "Vertex Distance from Source\n" << std::endl;
    for (int i = 0; i < V; i++) 

        std::cout << i << " N paso: " << dist[i] << std::endl; 
} 

void Dijkstra::calculate()
{
    int dist[V];	 

	bool sptSet[V]; 

	for (int i = 0; i < V; i++) 
		dist[i] = INT_MAX, sptSet[i] = false; 

	dist[src] = 0; 

	for (int count = 0; count < V-1; count++) 
	{ 
	
        int u = minDistance(dist, sptSet); 

        sptSet[u] = true; 

        for (int v = 0; v < V; v++) 
            if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX && dist[u]+graph[u][v] < dist[v]) dist[v] = dist[u] + graph[u][v]; 
	} 

	printSolution(dist, V); 
}