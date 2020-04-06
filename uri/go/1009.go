package main

import (
	"fmt"
)

func main() {

	var name string
	var salary float64
	var sales float64

	fmt.Scanf("%s\n%f\n%f", &name, &salary, &sales)

	salary += 0.15 * sales
	fmt.Printf("TOTAL = R$ %.2f\n", salary) 
	
}