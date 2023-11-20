package main

import (
	"fmt"
	"strconv"
)

func main() {
	// このコードは標準入力と標準出力を用いたサンプルコードです。
	// このコードは好きなように編集・削除してもらって構いません。
	// ---
	// This is a sample code to use stdin and stdout.
	// Edit and remove this code as you like.

	var str_n, str_m string
	fmt.Scanf("%s", &str_n)
	n, _ := strconv.Atoi(str_n)
	fmt.Scanf("%s", &str_m)
	m, _ := strconv.Atoi(str_n)

	a := make([][]int, n)
	for i := range a {
		a[i] = make([]int, m)
	}
	for i := 0; i < n; i++ {
		var str_ai string
		fmt.Scanf("%s", &str_ai)
		for j := 0; j < m; j++ {
			a[i][j], _ = strconv.Atoi(string(str_ai[j]))
		}
	}

	// 簡単な4*3の例
	if a[1][1] >= a[1][2] {
		if isLowerThanSurroundings() {
			// (i, j) = (1, 1), (1, 2)に水が入る
			fmt.Printf("%d\n", calculateWaterAmount())
			return
		} else {
			// (i, j) = (1, 2)に水が入る
			fmt.Printf("%d\n", calculateWaterAmount())
			return
		}
	} else {
		if isLowerThanSurroundings() {
			// (i, j) = (1, 1), (1, 2)に水が入る
			fmt.Printf("%d\n", calculateWaterAmount())
			return
		} else {
			// (i, j) = (1, 1)に水が入る
			fmt.Printf("%d\n", calculateWaterAmount())
			return
		}
	}

}

func isLowerThanSurroundings() bool {
	// 周囲の棒より低いか
	return false
}

func calculateWaterAmount() int {
	return 0
}
