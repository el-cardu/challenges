package main

import (
	"fmt"
)

func main() {

	var raio float64
	var A float64

    fmt.Scanf("%f", &raio)
	pi := 3.14159

	A = pi * raio * raio
    fmt.Printf("A=%.4f\n", A)

}