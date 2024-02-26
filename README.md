# competitive

## acc, oj

```sh
# ログイン acc session OKなら不要
acc login
oj login https://atcoder.jp

# 準備
cd atcoder
acc new abc000
cp code.cpp ./abc000/a
cd abc000/a
nvim code.cpp

# テスト
g++ -std=c++11 code.cpp
oj t -d tests

# 提出
acc submit code.cpp
```
