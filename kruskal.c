#include <stdio.h>
#include <stdlib.h>

struct edge {
//The ADT representing edges of a weighted graph
	char u, v;
	int weight;
};


struct graph {
//ADT representing the Graph
	int* V; 
	edge *E;
};

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


char* setVertices(int Vm) {
/* 
	Here Vm represents the number of vertices. An array of 
	this vertices is the output.
*/
	char *V;
	V = (char*)malloc(Vm*sizeof(char));

	for (int i=0; i<Vm; i++) {
		printf("Enter %iº Vertex: ", i);
		scanf("%c", &V[i]);
		printf("\n");
	}
	return V;
}


Edge* setEdges(int Em, int* V) {
/*
	Em represents the number of total edges; this function returns
	an array of weighted edges if vertices are on the 'set' V.
*/
	Edge* E;

	E = (Edge*)malloc(Em*sizeof(Edge));

	for (int i=0; i<Em; i++) {
		printf("Enter ordered pair of %iº edge.\n");
		printf("u: ");
		scanf("%c");
		scanf("%c: ");
		scanf("")

		// fill E array
	}

}