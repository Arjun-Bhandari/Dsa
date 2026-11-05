#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

class MatrixGraph {
private:
    vector<vector<int>> matrix;

public:
    explicit MatrixGraph(int vertexCount)
        : matrix(vertexCount, vector<int>(vertexCount, 0)) {}

    void addEdge(int source, int destination) {
        if (source < 0 || destination < 0 ||
            source >= matrix.size() || destination >= matrix.size()) {
            cout << "Invalid edge\n";
            return;
        }

        matrix[source][destination] = 1;
        matrix[destination][source] = 1;
    }

    void print() const {
        for (const vector<int>& row : matrix) {
            for (int value : row) {
                cout << value << ' ';
            }
            cout << '\n';
        }
    }
};

class ListGraph {
private:
    unordered_map<int, vector<int>> adjacencyList;

public:
    void addVertex(int vertex) {
        adjacencyList.try_emplace(vertex);
    }

    void addEdge(int source, int destination) {
        addVertex(source);
        addVertex(destination);

        adjacencyList[source].push_back(destination);
        adjacencyList[destination].push_back(source);
    }

    void print() const {
        for (const auto& [vertex, neighbors] : adjacencyList) {
            cout << vertex << " -> ";
            for (int neighbor : neighbors) {
                cout << neighbor << ' ';
            }
            cout << '\n';
        }
    }
};

int main() {
    cout << "Adjacency matrix:\n";
    MatrixGraph matrixGraph(5);
    matrixGraph.addEdge(0, 1);
    matrixGraph.addEdge(0, 2);
    matrixGraph.addEdge(1, 3);
    matrixGraph.addEdge(2, 4);
    matrixGraph.addEdge(3, 4);
    matrixGraph.addEdge(2, 3);
    matrixGraph.print();

    cout << "\nAdjacency list:\n";
    ListGraph listGraph;
    listGraph.addEdge(1, 2);
    listGraph.addEdge(1, 4);
    listGraph.addEdge(2, 4);
    listGraph.addEdge(3, 4);
    listGraph.addEdge(3, 5);
    listGraph.addEdge(4, 5);
    listGraph.print();

    return 0;
}