package main

import (
	"encoding/json"
	"fmt"
	"io"
	"net/http"
)

type Packet struct {
	Header struct {
		X int `json:"x"`
		Y int `json:"y"`
	} `json:"header"`
	Z int `json:"z"`
}

func main() {
	fmt.Println("start")
	p := Packet{}

	resp, _ := http.Get("https://mp2f099916d76b357141.free.beeceptor.com/get")
	b, _ := io.ReadAll(resp.Body)

	err := json.Unmarshal(b, &p)
	if err != nil {
		panic(err)
	}

	fmt.Printf("Data: %v\n", p)
}
