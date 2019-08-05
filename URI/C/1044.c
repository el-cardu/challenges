#include <stdio.h>
#include <stdbool.h>

int main() {

	int A, B;
	scanf("%d %d\n", &A, &B);

	bool multiples = (A%B == 0) || (B%A == 0);

	if (multiples) {
		printf("Sao Multiplos\n");
	} else {
		printf("Nao sao Multiplos\n");
	}

}
