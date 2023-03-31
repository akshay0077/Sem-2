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

int visited[MAX_VERTICES];

// Queue implementation for BFS
struct queue_node {
    int vertex;
    struct queue_node* next;
};
struct queue_node* front = NULL;
struct queue_node* rear = NULL;
void enqueue(int vertex) {
    struct queue_node* new_node = malloc(sizeof(struct queue_node));
    new_node->vertex = vertex;
    new_node->next = NULL;
    if (front == NULL) {
        front = rear = new_node;
    } else {
        rear->next = new_node;
        rear = new_node;
    }
}
int dequeue() {
    int vertex = front->vertex;
    struct queue_node* temp = front;
    front = front->next;
    free(temp);
    return vertex;
}
int is_queue_empty() {
    return front == NULL;
}

// Function to perform BFS
void bfs(int start_vertex) {
    visited[start_vertex] = 1;
    printf("%d ", start_vertex);
    enqueue(start_vertex);
    while (!is_queue_empty()) {
        int curr_vertex = dequeue();
        struct node* curr = adj_list[curr_vertex];
        while (curr != NULL) {
            int neighbor = curr->vertex;
            if (!visited[neighbor]) {
                visited[neighbor] = 1;
                printf("%d ", neighbor);
                enqueue(neighbor);
            }
            curr = curr->next;
        }
    }
}

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

    // Initialize visited array
    for (int i = 0; i < num_vertices; i++) {
        visited[i] = 0;
    }

    // Perform BFS
    printf("BFS traversal: ");
    for (int i = 0; i < num_vertices; i++) {
        if (!visited[i]) {
            bfs(i);
        }
    }
    printf("\n");

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
