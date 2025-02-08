#include <iostream>
using namespace std;
#define V 4 
#define MAX_COLORS 3
int graph[V][V] = {
    {0, 1, 1, 0},
    {1, 0, 1, 1},
    {1, 1, 0, 1},
    {0, 1, 1, 0}
};
bool isSafe(int v, int color[], int c) {
    for (int i = 0; i < V; i++) {
        if (graph[v][i] == 1 && color[i] == c) {
            return false; 
        }
    }
    return true;
}
bool graphColoringUtil(int color[], int v) {
    if (v == V) return true; 
    for (int c = 1; c <= MAX_COLORS; c++) {
        if (isSafe(v, color, c)) {
            color[v] = c;
            if (graphColoringUtil(color, v + 1)) {
                return true;
            }
            color[v] = 0; 
        }
    }
    return false;
}
bool graphColoring() {
    int color[V] = {0};

    if (!graphColoringUtil(color, 0)) {
        return false; 
    }
    cout << "Solution Exists: Following are the assigned colors:\n";
    for (int i = 0; i < V; i++) {
        cout << "Vertex " << i << " --> Color " << color[i] << endl;
    }
    return true;
}
int main() {
    if (!graphColoring()) {
        cout << "Solution does not exist";
    }
    return 0;
}
