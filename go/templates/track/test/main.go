package main

import (
	"fmt"
	"io/ioutil"
	"os"
	"strings"
)

func test_main() {
	lines := getStdin()
	n, m := int(lines[0][0]), int(lines[0][1])
	fmt.Printf("%d, %d\n", n, m)
}

func getStdin() []string {
	stdin, _ := ioutil.ReadAll(os.Stdin)
	return strings.Split(strings.TrimRight(string(stdin), "\n"), "\n")
}
