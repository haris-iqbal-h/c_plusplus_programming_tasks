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

// Function to implement Bidirectional Dijkstra's algorithm
int bidirectionalDijkstra(vector<vector<Edge>>& graph, int source, int target) {
    int n = graph.size();

    // Create two priority queues for forward and backward search
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> forwardQueue, backwardQueue;

    // Create two vectors to store distances from source and target
    vector<int> forwardDist(n, numeric_limits<int>::max());
    vector<int> backwardDist(n, numeric_limits<int>::max());

    // Mark the source and target distances as 0
    forwardDist[source] = 0;
    backwardDist[target] = 0;

    // Insert the source and target nodes into their respective queues
    forwardQueue.push(make_pair(0, source));
    backwardQueue.push(make_pair(0, target));

    // Variables to track the minimum distance and path length
    int minDist = numeric_limits<int>::max();

    // While both queues are not empty
    while (!forwardQueue.empty() && !backwardQueue.empty()) {
        // Forward search
        int forwardNode = forwardQueue.top().second;
        forwardQueue.pop();

        // Update the minimum distance if the current node is visited in both searches
        if (forwardDist[forwardNode] + backwardDist[forwardNode] < minDist) {
            minDist = forwardDist[forwardNode] + backwardDist[forwardNode];
        }

        // Check if forward search has reached the target node
        if (forwardNode == target) {
            break;
        }

        // Process each neighbor of the current node in the forward search
        for (const Edge& edge : graph[forwardNode]) {
            int neighbor = edge.destination;
            int weight = edge.weight;

            // Relax the edge if a shorter path is found
            if (forwardDist[forwardNode] + weight < forwardDist[neighbor]) {
                forwardDist[neighbor] = forwardDist[forwardNode] + weight;
                forwardQueue.push(make_pair(forwardDist[neighbor], neighbor));
            }
        }

        // Backward search
        int backwardNode = backwardQueue.top().second;
        backwardQueue.pop();

        // Update the minimum distance if the current node is visited in both searches
        if (forwardDist[backwardNode] + backwardDist[backwardNode] < minDist) {
            minDist = forwardDist[backwardNode] + backwardDist[backwardNode];
        }

        // Check if backward search has reached the source node
        if (backwardNode == source) {
            break;
        }

        // Process each neighbor of the current node in the backward search
        for (const Edge& edge : graph[backwardNode]) {
            int neighbor = edge.destination;
            int weight = edge.weight;

            // Relax the edge if a shorter path is found
            if (backwardDist[backwardNode] + weight < backwardDist[neighbor]) {
                backwardDist[neighbor] = backwardDist[backwardNode] + weight;
                backwardQueue.push(make_pair(backwardDist[neighbor], neighbor));
            }
        }
    }

    return minDist;
}

int main() {
    int n, m;
    cout << "Enter the number of nodes: ";
    cin >> n;
    cout << "Enter the number of edges: ";
    cin >> m;

    // Create a vector of vectors to represent the graph
}
