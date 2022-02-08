#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int sim(char x, char y) {
  if (x == '-' || y == '-') return -5;
  else if (x == y) return 1;
  else return -3;
}

int ssop(string s, string t) {
  int ans = 0;
  rep(i, s.size())
  {
    ans += sim(s.at(i), t.at(i));
  }
  return ans;
}

int main()
{
  string s, t;
  cin >> s >> t;

  int hyphens = (s.size + t.size() - 2) - abs(s.size - t.size()) + 1;

  cout << ssop(s, t) << endl;
}