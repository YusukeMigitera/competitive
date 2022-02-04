#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    cout << "vector" << endl;
    int n = 10;

    //配列
    vector<int> a(n);
    //rep(i, n) cin >> a[i];
    rep(i, n) a[i] = i;

    //多次元配列
    vector<vector<int>> b(n, vector<int>(2));
    rep(i, n) cin >> b[i][0] >> b[i][1];

    sort(a.begin(), a.end());    //小さい順 0, 1, 2, 3
    reverse(a.begin(), a.end()); //逆順

    auto res = find(a.begin(), a.end(), 3); //検索
    int m = res == a.end() ? -1 : *res;

    cout << m << endl;
}
