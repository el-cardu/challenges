package main

import (
	"fmt"
)

func main() {

	var A int
	var B int
	var C int
	var D int
	fmt.Scanf("%d\n%d\n%d\n%d", &A, &B, &C, &D)
	diferenca := (A * B) - (C * D)
	
	fmt.Printf("DIFERENCA = %d\n", diferenca)

}