#include <iostream>

using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll=long long; //-9,223,372,036,854,775,808 ~ 9,223,372,036,854,775,807
const int D = 1000000007; //定数

int main() {
  cout << "number" << endl;
  int n=5, a=3, b=2; //-2,147,483,648 ~ 2,147,483,647

  abs(-1) //絶対値 1
  pow(2, 3)        //冪乗 2^3=8
  a / b;           //切り捨て
  (a + b - 1) / b; //切り上げ
  sqrt(2.0); //平方根  1.414214
  modf(1.23, &integral_part); //小数部分0.23, integral_part==1
  gcd(12, 21); //最大公約数 3
  max(a, b); //aとbのうち大きい方の値を返す

  char(97); //ASCII変換 "a"
  to_string(10); //"10"

  cout << n << endl;
}