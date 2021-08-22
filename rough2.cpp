#include<bits/stdc++.h>

using namespace std;

int cellcompete(int *cells, int day) {
    int i, j;
    for (i = 0; i < day; i++) {
        cells[-1] = 0;
        cells[8] = 0;
        int u[8];
        for (int i = -1; i < 9; i++) {
            u[i] = cells[i];
        }
        for (j = 0; j < 8; j++) {
            if (u[j - 1] == u[j + 1]) {
                cells[j] = 0;
            } else
                cells[j] = 1;
        }
    }
    for (int i = 0; i < 8; i++)cout << cells[i] << " ";
}

int main() {
    int cells[8], n, i;
    for (i = 0; i < 8; i++)cin >> cells[i];
    cin >> n;
    cellcompete(cells, n);
    return 0;
}