#include <string>

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll=long long; //-9,223,372,036,854,775,808 ~ 9,223,372,036,854,775,807

//最大公約数
ll GCD(long long a, long long b) {
  if (b == 0) return a;
  else return GCD(b, a % b);
}

//9999...
ll nine(int n) {
  ll l=0;
  rep(i, n) l += 9 * pow(10, i);
  return l;
}

//行列90度回転
vector<vector<char>> rot(vector<vector<char>> s) {
  int n = s.size();
  vector<vector<char>> t(n, vector<char>(n));
  rep(i, s.size()) rep(j, s.size()) t[i][j] = s[j][s.size()-i];
  return t;
}
