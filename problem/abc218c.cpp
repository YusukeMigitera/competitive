#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

vector<int> find_left_top(vector<vector<char>> s) {
  rep(i, s.size()) rep(j, s.size()) if(s.at(i).at(j) == '#') return {i, j};
  return {0, 0};
}

bool same(vector<vector<char>> s, vector<vector<char>> t) {
  vector<int> s_left_top = find_left_top(s);
  vector<int> t_left_top = find_left_top(t);
  int offset_i = t_left_top.at(0)-s_left_top.at(0);
  int offset_j = t_left_top.at(1)-s_left_top.at(1);
  
  rep(i, s.size()) rep(j, s.size()) {
    int ii = i+offset_i;
	int jj = j+offset_j;
    if (0<=ii && ii<s.size() && 0<=jj && jj<s.size()) if (s[i][j] != t[ii][jj]) return false;
	else if (s[i][j]=='#') return false;
  }
  return true;
}

vector<vector<char>> rot(vector<vector<char>> s) {
  int n = s.size();
  vector<vector<char>> t(n, vector<char>(n));
  rep(i, s.size()) rep(j, s.size()) t[i][j] = s[j][s.size()-i];
  return t;
}

int main() {
  int n;
  cin >> n;
  vector<vector<char>> s(n, vector<char>(n)), t(n, vector<char>(n)); //多次元配列
  rep(i, n) rep(j, n) cin >> s[i][j];
  rep(i, n) rep(j, n) cin >> t[i][j];
  
  rep(i, 4) {
    if (same(s,t)) {
      cout << "Yes" << endl;
      return 0;
    }
	s = rot(s);
  }
  cout << "No" << endl;
}