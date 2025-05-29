# competitive

## 前提

```zsh
❯ acc session
check login status...
OK
```

そうでなければ

```zsh
❯ acc login

❯ oj login https://atcoder.jp
```

## atcoder/Makefile

- 準備 `make init contest=abc407 task=a`
- テスト `make test contest=abc407 task=a`
- 提出 `make submit contest=abc407 task=a`
