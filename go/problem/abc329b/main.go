package main

import (
	"fmt"
	"strconv"
)

func main() {
	var str_n string
	var a []int = []int{}

	// nを入力
	fmt.Scanf("%s", &str_n)
	n, _ := strconv.Atoi(str_n)

	// n個の数値を入力
	for i := 0; i < n; i++ {
		var temp string
		fmt.Scanf("%s", &temp)
		tempi, _ := strconv.Atoi(temp)
		a = append(a, tempi)
	}

	
}
