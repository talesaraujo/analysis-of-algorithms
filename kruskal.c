#include <stdio.h>
#include <stdlib.h>


//TAD representing edges and graphs
struct edge {
	char u, v;
	int weight;
};

struct graph {
	int* V; 
	edge *E;
};


//Auxiliar functions with intent to build the graph. 

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

bool belongs(char u, char* V) {
/*
	Tests whether u belongs to the array (set) V or not.
*/
	Vm = sizeof(V)/sizeof(int);

	for(int i=0; i<Vm; i++) {
		if V[i] == u;
			return TRUE;
	}
	return FALSE;
}


struct edge* setEdges(int Em, char* V) {
/*
	'Em' represents the number of total edges; this function returns
	an array of weighted edges if vertices are on the 'set' V.
*/
	struct edge* E;
	char u, v;
	int w;

	E = ((struct edge)*)malloc(Em*sizeof(struct edge));

	for (int i=0; i<Em; i++) {
		printf("Ordered pair of %iº edge.\n");

		printf("u: ");
		scanf("%c", &u);

		printf("v: ");
		scanf("%c", &v);

		printf("Weight: ");
		scanf("%i", &w);

		printf("\n");

		if (belongs(u, V) && (belongs(v, V))) {
			E[i].u = u;
			E[i].v = v;
			E[i].w = w;
		}

		else {
			return NULL;
		}
	}
	return E;
}

struct graph* buildGraph(int *V, Edge* E) {
/* 
	This function receives a set of vertices V[1...n] 
	and a set of edges E[1...n] and returns a structure 
	representing a weighted graph G=(V,E)
 */
	Vm = sizeof(V)/sizeof(int);
	Em = sizeof(E)/sizeof(struct edge);

	// If |E| is different of |V|-1
	if (Em != Vm-1) {
		printf("Error: Inconsistent edges and vertices number.\n", );
		return NULL;
	}

	struct graph* G;
	G = ((struct graph)*) malloc(sizeof(struct graph));

	G.vertices = V;
	G.edges = E;

	return G;
}



/*
	Kruskal Algorithm subroutines 	
*/

void MakeSet(v) {
	
}
