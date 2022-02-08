#include <bits/stdc++.h>
using namespace std;
const long long INF = 1LL << 60;

// 入力
int N;
int W, weight[100], value[100];

// DP テーブル
long long dp[101][100001];

int rec(int i, int j, int n, vector<int> w) {
    int res;
    if (i == n) res = 0;
    else if (j < w[i]) //この品物を入れられない
    {
        res = rec(i+1, j, n, w);
    }
    else res = max(rec(i+1, j, n, w), rec(i+1, j, n, w));
    
    return res;
}

int main() {
    cin >> N >> W;
    for (int i = 0; i < N; ++i) cin >> weight[i] >> value[i];

    cout << rec(0, W, N, weight) << endl;
}