#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int m, n;
    vector<vector<int>> arr;
    cin >> m >> n;
    arr.resize(m + 2, vector<int>(n+2, 0));
    arr[0][0] = arr[m + 1][n + 1] = -1;
    for (auto row : arr) {
        for (auto num : row) {
            cout << num << ' ';
        }
        cout << endl;
    }
}
