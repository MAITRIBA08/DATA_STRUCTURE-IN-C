
#include <stdio.h>

int visited[20];

void DFS(int graph[20][20], int n, int start)
{
    int i;

    visited[start] = 1;
    printf("%d ", start);

    for (i = 0; i < n; i++)
    {
        if (graph[start][i] == 1 && visited[i] == 0)
        {
            DFS(graph, n, i);
        }
    }
}

int main()
{
    int graph[20][20], n, i, j, start;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &graph[i][j]);
        }
    }

    printf("Enter starting vertex (0 to %d): ", n - 1);
    scanf("%d", &start);

    printf("DFS Traversal: ");
    DFS(graph, n, start);

    return 0;
}
