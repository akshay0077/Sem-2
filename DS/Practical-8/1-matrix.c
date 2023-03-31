#include <stdio.h>
#define MAX_VERTICES_SIZE 100

int adj_matrix[MAX_VERTICES_SIZE][MAX_VERTICES_SIZE];
int degree[MAX_VERTICES_SIZE];

int main() {
    int num_vertices, num_edges;
    printf("Enter the number of vertices in the graph: ");
    scanf("%d", &num_vertices);
    printf("Enter the number of edges in the graph: ");
    scanf("%d", &num_edges);

    // Initialize adjacency matrix
    for (int i = 0; i < num_vertices; i++) {
        for (int j = 0; j < num_vertices; j++) {
            adj_matrix[i][j] = 0;
        }
    }

    // Add edges to adjacency matrix
    for (int i = 0; i < num_edges; i++) {
        int u, v;
        printf("Enter an edge (u, v): ");
        scanf("%d%d", &u, &v);
        adj_matrix[u][v] = 1;
        adj_matrix[v][u] = 1; // undirected graph
    }

    // Compute degree of each vertex
    for (int i = 0; i < num_vertices; i++) {
        int deg = 0;
        for (int j = 0; j < num_vertices; j++) {
            if (adj_matrix[i][j]) {
                deg++;
            }
        }
        degree[i] = deg;
    }

    // Print graph information
    printf("Number of edges: %d\n", num_edges);
    printf("Edges list:\n");
    for (int i = 0; i < num_vertices; i++) {
        for (int j = i + 1; j < num_vertices; j++) {
            if (adj_matrix[i][j]) {
                printf("(%d, %d)\n", i, j);
            }
        }
    }
    printf("Degree of each vertex:\n");
    for (int i = 0; i < num_vertices; i++) {
        printf("Vertex %d: %d\n", i, degree[i]);
    }

    return 0;
}
