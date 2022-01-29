#include <iostream>
#include <string>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  cout << "text" << endl;
  string s, t;
  
  s = string(5, '.'); //s == "....."
  t = "abcdef";

  t.substr(2, 3); //2文字目から3文字取得 cde これだけ参照のみ
  t.replace(0,2, "zz"); //0文字目から2文字置換 zzcdef
  t.erase(3, 2); // 3文字目から2文字削除 abcf
  t.pop_back(); //末尾削除 O(1) abcde
  t.back(); //末尾取得 ==s[s.size()-1] f
  t.find('c'); //検索 2
  
  stoi("10");   //10 string
  int('1' - '0'); //1 char
  
  s.push_back('0' + 1); // 48 + 1 = 49 ASCII変換'1'
  string convert(long long x){ // 10進数を２進数の文字列に変換
    string res;
    while(x>0){
      res.push_back('0'+(x%2));
      x/=2;
    }
    reverse(res.begin(),res.end());
    return res;
  }

  cout <<  + 1 << endl;
}