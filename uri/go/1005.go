package main

import (
	"fmt"
)

func main() {

	var A float64
	var B float64

	fmt.Scanf("%f", &A)
	fmt.Scanf("%f", &B)

	media := (0.35 * A + 0.75 * B) / 1.10

	fmt.Printf("MEDIA = %.5f\n", media)

}