#include <stdio.h>
#include <stdlib.h>

//The ADT representing edges of a weighted graph
typedef struct edge {
	int *u, *v;
	int weight;

}Edge;


//ADT representing the Graph
typedef struct graph {
	int* vertices; 
	Edge *edges;

}Graph;


Graph* buildGraph(int *V, Edge* E) {
/* 
	This function receives a set of vertices V[1...n] 
	and a set of edges E[1...n] and returns a structure 
	representing a weighted graph G=(V,E)
 */
	Vm = sizeof(V)/sizeof(int);
	Em = sizeof(E)/sizeof(Edge);

	// If |E| is different of |V|-1
	if (Em != Vm-1) {
		return NULL;
	}

	Graph* G;
	G.vertices = V;
	G.edges = E;

	return G;
}


int* setVertices(int Vm) {
/* 
	Here Vm represents the number of vertices. An array of 
	this vertices is the output.
*/
	int *V;
	V = (int*)malloc(Vm*sizeof(int));

	for (int i=0; i<Vm; i++) {
		printf("%iº Vertex\n", i);
		scanf("%i", &V[i]);
	}

	return V;
}


int setEdges()