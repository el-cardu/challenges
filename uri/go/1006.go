package main

import (
	"fmt"
)

func main() {

	var A float64
	var B float64
	var C float64

	fmt.Scanf("%f", &A)
	fmt.Scanf("%f", &B)
	fmt.Scanf("%f", &C)

	media := 0.2 * A + 0.3 * B + 0.5 * C
	fmt.Printf("MEDIA = %.1f\n", media)

}