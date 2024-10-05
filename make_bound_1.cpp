#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int m, n;
    vector<vector<int>> arr;
    cin >> m >> n;
    vector<int> row(n + 2, 0); row[0] = row[n + 1] = -1;
    arr.resize(m + 2, row);
    arr[0] = arr[m + 1] = vector<int>(n+2, -1);
    for (auto row : arr) {
        for (auto num : row) {
            cout << num << ' ';
        }
        cout << endl;
    }
}
