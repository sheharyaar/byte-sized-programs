package main

import (
	"fmt"
	"sync"
)

func goroutineHB() {
	var wg sync.WaitGroup
	wg.Add(1)
	fmt.Println("this happens before goroutine executes")
	go func() {
		fmt.Println("Hello from goroutine!")
		wg.Done()
	}()

	wg.Wait()
	fmt.Println("executes after wg.Wait")
}

func bufChanHB() {
	ch := make(chan int, 10)

	go func() {
		fmt.Println("hello from goroutine!")
		close(ch)
	}()

	// close() happens before receive on a buffered channel
	<- ch
}

func unbufChanHB() {
	ch := make(chan int)
	var a string

	go func() {
		a = "Hello World"
		// receive on a unbuffered channel happens before a send
		<-ch
	}()

	ch <- 0
	fmt.Println(a)
}

func main() {
	goroutineHB()
	bufChanHB()
	unbufChanHB()
}
