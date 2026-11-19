#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m, w;
    cin >> n >> m >> w;

    vector<vector<char>> field(n, vector<char>(m, '0'));

    for (int k = 0; k < w; k++) {
        int r, c;
        cin >> r >> c;
        field[r - 1][c - 1] = '*';
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (field[i][j] == '*') continue;

            int count = 0;
            for (int di = -1; di <= 1; di++) {
                for (int dj = -1; dj <= 1; dj++) {
                    int ni = i + di;
                    int nj = j + dj;
                    if (ni >= 0 && ni < n && nj >= 0 && nj < m && field[ni][nj] == '*') {
                        count++;
                    }
                }
            }
            field[i][j] = count + '0';
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << field[i][j];
            if (j < m - 1) cout << " ";
        }
        cout << "\n";
    }

    return 0;
}