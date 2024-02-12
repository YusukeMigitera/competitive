# competitive

## acc, oj

```sh
# ログイン
acc login
oj login https://atcoder.jp

# 準備
cd atcoder
acc new abc000
cp ../template_atcoder.cpp ./abc000/a/code.cpp
cd abc000/a
nvim code.cpp

# テスト
g++ code.cpp
oj t -d tests

# 提出
acc submit code.cpp
```
