package main

import (
	"errors"
	"fmt"
)

func myFunc() (int, error) {
	a := 100
	err := errors.New("new error")
	return a, err
}

func main() {
	a, err := myFunc()
	fmt.Printf("%v %v\n", a, err)
}

