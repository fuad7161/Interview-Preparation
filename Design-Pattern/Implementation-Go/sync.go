package main

import(
	"os"
	"sync"
	"fmt"
)

func main(){
	once := sync.OnceValues(func()([]byte, error){
		fmt.Println("Reading file once")
		return os.ReadFile("text.go")
	})
	done := make(chan bool)
	for i := 0; i<10;i++{
		fmt.Println("First loop is calling.")
		go func(){
			fmt.Println("Unser the go routin is calling")
			data, err := once()
			if err != nil{
				fmt.Println("Error: ", err)
			}
			_ = data
			done <- true
		}()
	}
	for i:=0;i<10;i++{
		fmt.Println("Second loop is calling.")
		<-done
	}
}