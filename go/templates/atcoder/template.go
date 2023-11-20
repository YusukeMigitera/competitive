package main

import (
	"fmt"
)

func main() {
	var input string
	fmt.Scanf("%s", &input)
	for i := 0; i < len(input); i++ {
		fmt.Printf("%s", string(input[i]))
		if i == len(input)-1 {
			fmt.Println()
		} else {
			fmt.Print(" ")
		}
	}
}
