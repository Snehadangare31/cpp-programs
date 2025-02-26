#include <iostream>
#include <vector>
#include <cmath>
#include <limits>
using namespace std;

// Function to calculate the Euclidean distance
double euclideanDistance(pair<double, double> point1, pair<double, double> point2) {
    return sqrt(pow(point1.first - point2.first, 2) + pow(point1.second - point2.second, 2));
}

int main() {
    // Number of clusters and data points
    int k = 2; // Number of clusters
    vector<pair<double, double>> points = { {2.0, 3.0}, {5.0, 8.0}, {1.5, 1.8}, {7.0, 8.0}, {8.0, 8.0}, {1.0, 0.6}, {9.0, 11.0} };
    int n = points.size();

    // Initialize centroids (randomly selected)
    vector<pair<double, double>> centroids = { {2.0, 3.0}, {7.0, 8.0} };

    vector<int> labels(n, -1); // Cluster labels for each point
    bool changed = true;

    // K-Means algorithm
    while (changed) {
        changed = false;

        // Step 1: Assign points to the nearest centroid
        for (int i = 0; i < n; ++i) {
            double minDistance = numeric_limits<double>::max();
            int cluster = -1;

            for (int j = 0; j < k; ++j) {
                double distance = euclideanDistance(points[i], centroids[j]);
                if (distance < minDistance) {
                    minDistance = distance;
                    cluster = j;
                }
            }

            if (labels[i] != cluster) {
                labels[i] = cluster;
                changed = true;
            }
        }

        // Step 2: Recalculate centroids
        vector<pair<double, double>> newCentroids(k, {0.0, 0.0});
        vector<int> clusterSize(k, 0);

        for (int i = 0; i < n; ++i) {
            newCentroids[labels[i]].first += points[i].first;
            newCentroids[labels[i]].second += points[i].second;
            clusterSize[labels[i]]++;
        }

        for (int j = 0; j < k; ++j) {
            if (clusterSize[j] > 0) {
                newCentroids[j].first /= clusterSize[j];
                newCentroids[j].second /= clusterSize[j];
            }
        }

        if (newCentroids != centroids) {
            centroids = newCentroids;
        } else {
            changed = false;
        }
    }

    // Output the results
    cout << "Final Cluster Assignments:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Point (" << points[i].first << ", " << points[i].second << ") -> Cluster " << labels[i] + 1 << endl;
    }

    cout << "Final Centroids:" << endl;
    for (int j = 0; j < k; ++j) {
        cout << "Cluster " << j + 1 << ": (" << centroids[j].first << ", " << centroids[j].second << ")" << endl;
    }

    return 0;
}

