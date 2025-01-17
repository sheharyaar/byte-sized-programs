package main

import (
	"fmt"
	"reflect"
)

type MyStruct struct {
	X int `hello:"world"`
	Y int `bye:"world" lagnos:"shehar"`
}

func main() {
	s := MyStruct{}
	st := reflect.TypeOf(s)

	f1 := st.Field(0)
	fmt.Println(f1.Tag.Get("hello"))
}
