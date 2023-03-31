#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICES 100

// A node in the adjacency list
struct node {
    int vertex;
    struct node* next;
};

// The adjacency list for the graph
struct node* adj_list[MAX_VERTICES];

int degree[MAX_VERTICES];

int main() {
    int num_vertices, num_edges;
    printf("Enter the number of vertices in the graph: ");
    scanf("%d", &num_vertices);
    printf("Enter the number of edges in the graph: ");
    scanf("%d", &num_edges);

    // Initialize adjacency list
    for (int i = 0; i < num_vertices; i++) {
        adj_list[i] = NULL;
    }

    // Add edges to adjacency list
    for (int i = 0; i < num_edges; i++) {
        int u, v;
        printf("Enter an edge (u, v): ");
        scanf("%d%d", &u, &v);
        // Add edge to u's adjacency list
        struct node* new_node = malloc(sizeof(struct node));
        new_node->vertex = v;
        new_node->next = adj_list[u];
        adj_list[u] = new_node;
        // Add edge to v's adjacency list
        new_node = malloc(sizeof(struct node));
        new_node->vertex = u;
        new_node->next = adj_list[v];
        adj_list[v] = new_node;
    }

    // Compute degree of each vertex
    for (int i = 0; i < num_vertices; i++) {
        int deg = 0;
        struct node* curr = adj_list[i];
        while (curr != NULL) {
            deg++;
            curr = curr->next;
        }
        degree[i] = deg;
    }

    // Print graph information
    printf("Number of edges: %d\n", num_edges);
    printf("Edges list:\n");
    for (int i = 0; i < num_vertices; i++) {
        struct node* curr = adj_list[i];
        while (curr != NULL) {
            if (curr->vertex > i) {
                printf("(%d, %d)\n", i, curr->vertex);
            }
            curr = curr->next;
        }
    }
    printf("Degree of each vertex:\n");
    for (int i = 0; i < num_vertices; i++) {
        printf("Vertex %d: %d\n", i, degree[i]);
    }

    // Free memory
    for (int i = 0; i < num_vertices; i++) {
        struct node* curr = adj_list[i];
        while (curr != NULL) {
            struct node* temp = curr;
            curr = curr->next;
            free(temp);
        }
    }

    return 0;
}
