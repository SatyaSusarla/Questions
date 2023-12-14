#include <iostream>
#include <stack>
#include <queue>
#include <climits>
#include <algorithm>

#define MAX 100

using namespace std;

class Graph {
private:
    int vertices;
    int adjacencyMatrix[MAX][MAX];

    int findParent(int vertex, int parent[]) {
        if (parent[vertex] == -1) {
            return vertex;
        }

        return findParent(parent[vertex], parent);
    }

public:
    Graph(int v) {
    vertices = v;

    for (int i = 0; i < MAX; ++i) {
        for (int j = 0; j < MAX; ++j) {
            adjacencyMatrix[i][j] = 0;
        }
    }
}

    void addEdge(int u, int v, int weight) {
        adjacencyMatrix[u][v] = weight;
        adjacencyMatrix[v][u] = weight; 
    }

    void DFS(int startVertex) {
        bool visited[MAX] = {false};
        stack<int> s;
        s.push(startVertex);

        cout << "DFS Traverse " << startVertex << ": ";

        while (!s.empty()) {
            int currentVertex = s.top();
            s.pop();

            if (!visited[currentVertex]) {
                cout << currentVertex << " ";
                visited[currentVertex] = true;

                for (int i = vertices - 1; i >= 0; --i) {
                    if (adjacencyMatrix[currentVertex][i] && !visited[i]) {
                        s.push(i);
                    }
                }
            }
        }

        cout << endl;
    }

    void BFS(int startVertex) {
        bool visited[MAX] = {false};
        queue<int> q;
        q.push(startVertex);

        cout << "BFS Traverse " << startVertex << ": ";

        while (!q.empty()) {
            int currentVertex = q.front();
            q.pop();

            if (!visited[currentVertex]) {
                cout << currentVertex << " ";
                visited[currentVertex] = true;

                for (int i = 0; i < vertices; ++i) {
                    if (adjacencyMatrix[currentVertex][i] && !visited[i]) {
                        q.push(i);
                    }
                }
            }
        }

        cout << endl;
    }

    void kruskalMST() {
        pair<int, pair<int, int>> edges[MAX];
        int edgeCount = 0;

        for (int i = 0; i < vertices; ++i) {
            for (int j = i + 1; j < vertices; ++j) {
                if (adjacencyMatrix[i][j] != 0) {
                    edges[edgeCount++] = {adjacencyMatrix[i][j], {i, j}};
                }
            }
        }

        sort(edges, edges + edgeCount);

        int parent[MAX];
        fill(parent, parent + MAX, -1);

        cout << "Minimum Spanning Tree: ";

        for (int i = 0; i < edgeCount; ++i) {
            int root1 = findParent(edges[i].second.first, parent);
            int root2 = findParent(edges[i].second.second, parent);

            if (root1 != root2) {
                cout << "(" << edges[i].second.first << "," << edges[i].second.second << ") ";
                parent[root1] = root2;
            }
        }

        cout << endl;
    }

    void primMST(int startVertex) {
        int parent[MAX];
        fill(parent, parent + MAX, -1);

        int key[MAX];
        fill(key, key + MAX, INT_MAX);

        bool inMST[MAX] = {false};

        key[startVertex] = 0;

        for (int count = 0; count < vertices - 1; ++count) {
            int u = -1;

            for (int i = 0; i < vertices; ++i) {
                if (!inMST[i] && (u == -1 || key[i] < key[u])) {
                    u = i;
                }
            }

            inMST[u] = true;

            for (int v = 0; v < vertices; ++v) {
                if (adjacencyMatrix[u][v] && !inMST[v] && adjacencyMatrix[u][v] < key[v]) {
                    key[v] = adjacencyMatrix[u][v];
                    parent[v] = u;
                }
            }
        }

        cout << "Minimum Spanning Tree from vertex " << startVertex << ": ";
        for (int i = 0; i < vertices; ++i) {
            if (i != startVertex) {
                cout << "(" << parent[i] << "," << i << ") ";
            }
        }

        cout << endl;
    }
};

int main() {
    int vertices, choice, startVertex;

    cout << "Enter Vetrices ";
    cin >> vertices;

    Graph graph(vertices);

    cout << "Enter the adjacency matrix "<< endl;
    for (int i = 0; i < vertices; ++i) {
        for (int j = 0; j < vertices; ++j) {
            int weight;
        cin >> weight;
        graph.addEdge(i, j, weight);
        }
    }

    do {
        cout << "1. Traverse the graph using DFS 2. Traverse the graph using BFS 3. Minimum Spanning Tree using Kruskal's Algorithm 4. Minimum Spanning Tree using Prim's Algorithm 0. Exit"<<endl;
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter starting vertex";
                cin >> startVertex;
                graph.DFS(startVertex);
                break;

            case 2:
                cout << "Enter the start vertex";
                cin >> startVertex;
                graph.BFS(startVertex);
                break;

            case 3:
                graph.kruskalMST();
                break;

            case 4:
                cout << "Enter the start vertex";
                cin >> startVertex;
                graph.primMST(startVertex);
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
