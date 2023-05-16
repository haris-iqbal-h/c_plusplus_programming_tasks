#include <iostream>
#include <vector>
#include <queue>
#include <limits>

using namespace std;

// Structure to represent an edge
struct Edge {
    int destination;
    int weight;
};

// Function to implement Dijkstra's algorithm
vector<int> dijkstra(vector<vector<Edge>>& graph, int source) {
    int n = graph.size();

    // Create a priority queue to store vertices with their distances from the source
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    // Create a vector to store the minimum distances from the source to each vertex
    vector<int> distance(n, numeric_limits<int>::max());

    // Mark the distance of the source node as 0
    distance[source] = 0;

    // Insert the source node into the priority queue
    pq.push(make_pair(0, source));

    // Dijkstra's algorithm
    while (!pq.empty()) {
        int node = pq.top().second;
        int dist = pq.top().first;
        pq.pop();

        // If the distance to the current node is greater than the extracted distance, skip it
        if (dist > distance[node]) {
            continue;
        }

        // Process each neighbor of the current node
        for (const Edge& edge : graph[node]) {
            int neighbor = edge.destination;
            int weight = edge.weight;

            // Calculate the new distance to the neighbor node
            int newDist = dist + weight;

            // If the new distance is shorter, update the distance and insert the neighbor into the priority queue
            if (newDist < distance[neighbor]) {
                distance[neighbor] = newDist;
                pq.push(make_pair(newDist, neighbor));
            }
        }
    }

    return distance;
}

int main() {
    int n, m;
    cout << "Enter the number of nodes: ";
    cin >> n;
    cout << "Enter the number of edges: ";
    cin >> m;

    // Create a vector of vectors to represent the graph
    vector<vector<Edge>> graph(n);

    // Read the edges and their weights
    for (int i = 0; i < m; ++i) {
        int source, destination, weight;
        cout << "Enter edge " << i + 1 << " (source destination weight): ";
        cin >> source >> destination >> weight;

        // Add the edge to the graph
        graph[source].push_back({ destination, weight });
    }

    int source;
    cout << "Enter the source node: ";
    cin >> source;

    // Run Dijkstra's algorithm
    vector<int> distances = dijkstra(graph, source);

    // Print the minimum distances from the source to all other nodes
    cout << "Minimum distances from node " << source << ":\n";
    for (int i = 0; i < n; ++i) {
        cout << "Node " << i << ": " << distances[i] << "\n";
    }

    return 0;
}
