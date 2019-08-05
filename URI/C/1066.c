#include <stdio.h>
#include <stdbool.h>

int main() {

	int counter_even_values = 0, counter_odd_values = 0;
	int counter_positive_values = 0, counter_negative_values = 0;
	int value, number_of_inputs;

	for(number_of_inputs = 1; number_of_inputs <= 5; number_of_inputs++) {

		scanf("%d", &value);

		bool isEven = (value%2 == 0);
		bool isPositive = (value > 0);
		bool isNegative = (value < 0);

		if(isPositive)
			counter_positive_values++;
		if(isNegative)
			counter_negative_values++;

		if(isEven)
			counter_even_values++;
		else
			counter_odd_values++;

	}

	printf("%d valor(es) par(es) \n", counter_even_values);
	printf("%d valor(es) impar(es) \n", counter_odd_values);
	printf("%d valor(es) positivo(s) \n", counter_positive_values);
	printf("%d valor(es) negativo(s) \n", counter_negative_values);

}
