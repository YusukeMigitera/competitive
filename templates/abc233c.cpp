#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

using Graph = vector<vector<int>>;

void dfs(const Graph &G, int v) {
    seen[v] = true; // v 訪問済み

    // vから行ける各頂点next_v
    for(auto next_v: G[v]) {
        if(seen[next_v]) continue;
        dfs(G, next_v)
    }
}

int main() {
  int n, x;
  cin >> n >> x;
  vector<vector<int>> a(n, vector<int>);
  rep(i, n) {
    int l, m;
    cin >> l;
    rep(j, l) {
      cin >> m;
      a[j].push_back(m);
    }
  }

  cout << "" << endl;
}