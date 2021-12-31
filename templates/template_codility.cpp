1
// you can use includes, for example:
// #include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int c=1, i=0;
    while(1) {
        if(A[i] == -1) return c;
        c++;
        i = A[i];
    }
}

2
int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int a, b, c, n=A.size(), tmp=-1;
    sort(A.begin(), A.end());
    reverse(A.begin(), A.end());
    rep(i,n-2) rep(j,n-i-2) rep(k,n-j-2) {
        a = A[i];
        b = A[j+i+1];
        c = A[k+j+i+2];
        //cout << a << ',' << b << ',' << c << endl;
        if ((a+b)>c && (b+c)>a && (c+a)>b) {
            if(tmp == -1) tmp=a+b+c;
            else return tmp;
        }
    }
    return tmp;
}