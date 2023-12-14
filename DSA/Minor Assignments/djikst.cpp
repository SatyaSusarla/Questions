#include <iostream>
#include <climits>
#define MAX 50
using namespace std;

class Graph {
private:
    int vertices;
    int adjacencyMatrix[MAX][MAX];

public:
    Graph(int v) {
        vertices = v;

        for (int i = 0; i < MAX; ++i) {
            for (int j = 0; j < MAX; ++j) {
                adjacencyMatrix[i][j] = (i == j) ? 0 : INT_MAX;
            }
        }
    }

    void addEdge(int u, int v, int weight) {
        adjacencyMatrix[u][v] = weight;
        adjacencyMatrix[v][u] = weight;
    }

    void dijkstra(int startVertex) {
        int distance[MAX];
        bool visited[MAX] = {false};

        for (int i = 0; i < vertices; ++i) {
            distance[i] = INT_MAX;
        }

        distance[startVertex] = 0;

        for (int count = 0; count < vertices - 1; ++count) {
            int minDistance = INT_MAX, minIndex = -1;

            for (int i = 0; i < vertices; ++i) {
                if (!visited[i] && distance[i] < minDistance) {
                    minDistance = distance[i];
                    minIndex = i;
                }
            }

            visited[minIndex] = true;

            for (int i = 0; i < vertices; ++i) {
                if (!visited[i] && adjacencyMatrix[minIndex][i] && distance[minIndex] != INT_MAX &&
                    distance[minIndex] + adjacencyMatrix[minIndex][i] < distance[i]) {
                    distance[i] = distance[minIndex] + adjacencyMatrix[minIndex][i];
                }
            }
        }

        cout << "Shortest distance from vertex " << startVertex << " " << endl;
        for (int i = 0; i < vertices; ++i) {
            cout << "to vertex " << i << " " << distance[i] << endl;
        }
    }

    void floydWarshall() {
        int distance[MAX][MAX];

        for (int i = 0; i < vertices; ++i) {
            for (int j = 0; j < vertices; ++j) {
                distance[i][j] = adjacencyMatrix[i][j];
            }
        }

        for (int k = 0; k < vertices; ++k) {
            for (int i = 0; i < vertices; ++i) {
                for (int j = 0; j < vertices; ++j) {
                    if (distance[i][k] != INT_MAX && distance[k][j] != INT_MAX && distance[i][k] + distance[k][j] < distance[i][j]) {
                        distance[i][j] = distance[i][k] + distance[k][j];
                    }
                }
            }
        }

        cout << "Shortest distances " << endl;
        for (int i = 0; i < vertices; ++i) {
            for (int j = 0; j < vertices; ++j) {
                if (distance[i][j] == INT_MAX) {
                    cout << "Invalid\t";
                } else {
                    cout << distance[i][j] << "\t";
                }
            }
            cout << endl;
        }
    }
};

int main() {
    int vertices, choice, startVertex;
    cout << "Enter number of vertices ";
    cin >> vertices;
    Graph graph(vertices);
    cout << "Enter the adjacency matrix " << endl;
    for (int i = 0; i < vertices; ++i) {
        for (int j = 0; j < vertices; ++j) {
            int weight;
            cin >> weight;
            graph.addEdge(i, j, weight);
        }
    }

    do {
        cout << "1. Dijkstra's Algorithm 2. Floyd-Warshall's Algorithm 3. Exit "<<endl;
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter the starting vertex ";
                cin >> startVertex;
                graph.dijkstra(startVertex);
                break;

            case 2:
                graph.floydWarshall();
                break;

            case 0:
                cout << "Exit";
                break;

            default:
                cout << "Invalid choice";
        }
    } while (choice != 0);

    return 0;
}
