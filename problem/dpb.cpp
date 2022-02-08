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

#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const long long INF = 1LL << 60;

// 入力
int N;
long long h[100000];

// DP テーブル
long long dp[100000];

int main() {
    int N, k; cin >> N >> k;
    for (int i = 0; i < N; ++i) cin >> h[i];

    // 初期化 (最小化問題なので INF に初期化)
    for (int i = 0; i < 100000; ++i) dp[i] = INF;

    // 初期条件
    dp[0] = 0;

    // ループ
    for (int i = 1; i < N; ++i) {
      for (int j=1; j<=min(i, k); j++) {
        chmin(dp[i], dp[i - j] + abs(h[i] - h[i - j]));
      }
    }

    // 答え
    cout << dp[N-1] << endl;
}