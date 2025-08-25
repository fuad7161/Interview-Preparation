// Singleton pattern implementation in Go
package main

import (
	"fmt"
	"sync"
)

type singleton struct{
	value string
}

var (
	instance *singleton
	once sync.Once
)

func GetInstance() *singleton{
	// once.Do(func(){
	// 		fmt.Println("Creating singleton Instance")
	// 		instance = &singleton{value: "I am the singleton instance"}
	// 	})
	once.Do(func(){
		fmt.Println("Creating singleton Instance")
		instance = &singleton{value: "I am the singleton instance"}
	})
	return instance
}

func main(){
	s1 := GetInstance()
	s2 := GetInstance()
	s3 := GetInstance()

	fmt.Println(s1.value)
	fmt.Println(&s1)
	fmt.Println(&s2)
	fmt.Println(&s3)
	fmt.Println("Same instance?", s1 == s2)
}

// )

// // Singleton struct
// type Singleton struct {
// 	data string
// }

// var instance *Singleton
// var mu sync.Mutex

// // GetInstance returns the singleton instance
// func GetInstance() *Singleton {
// 	mu.Lock()
// 	defer mu.Unlock()
// 	if instance == nil {
// 		instance = &Singleton{}
// 	}
// 	return instance
// }

// func main() {
// 	s1 := GetInstance()
// 	s1.data = "Hello, Singleton!"

// 	s2 := GetInstance()
// 	println(s2.data) // Output: Hello, Singleton!
// }
