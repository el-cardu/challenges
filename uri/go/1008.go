package main

import (
	"fmt"
)

func main() {

	var employeeNumber int
	var workedHours int
	var salaryPerHour float64

	fmt.Scanf("%d\n%d\n%f", &employeeNumber, &workedHours, &salaryPerHour)
	fmt.Printf("NUMBER = %d\n", employeeNumber)

	salary := float64(workedHours) * salaryPerHour
	fmt.Printf("SALARY = U$ %.2f\n", salary)
	
}