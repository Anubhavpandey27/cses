#include <iostream>
using namespace std;

int main() {
    const int n = 5;                     // Total number of processes
    const int r = 3;                     // Total number of resources
    int alloc[5][3] = {{0, 0, 1},        // Allocation matrix
                       {3, 0, 0},
                       {1, 0, 1},
                       {2, 3, 2},
                       {0, 0, 3}};

    int max[5][3] = {{7, 6, 6},           // Max matrix
                     {3, 2, 2},
                     {8, 0, 2},
                     {2, 1, 2},
                     {5, 2, 3}};

    int avail[3] = {2, 3, 2};             // Available resources

    int need[n][r];                       // Remaining Need
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < r; j++) {
            need[i][j] = max[i][j] - alloc[i][j];
        }
    }

    int f[n] = {0};                       // Array to track completed processes
    int ans[n], ind = 0;                  // Array to store safe sequence and index

    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            if (f[i] == 0) {
                int flag = 0;
                for (int j = 0; j < r; j++) {
                    if (need[i][j] > avail[j]) {
                        flag = 1;
                        break;
                    }
                }
                if (flag == 0) {
                    ans[ind++] = i;
                    for (int y = 0; y < r; y++) {
                        avail[y] += alloc[i][y];
                    }
                    f[i] = 1;
                }
            }
        }
    }

    if (ind < n) {
        cout << "No safe sequence exists." << endl;
    } else {
        cout << "The safe sequence is: " << endl;
        for (int i = 0; i < n; i++) {
            cout << "P" << ans[i];
            if (i < n - 1) {
                cout << " -> ";
            }
        }
        cout << endl;
    }

    return 0;
}
