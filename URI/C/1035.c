#include <stdio.h>
#include <stdbool.h>

int main() {

	int A, B, C, D;
	scanf("%d %d %d %d\n", &A, &B, &C, &D);

	bool condition1 = (B > C) && (D > A);
	bool condition2 = (C + D) > (A + B);
	bool condition3 = (C > 0) && (D > 0);
	bool condition4 = (A%2 == 0);

	if (condition1 && condition2 && condition3 && condition4) {
		printf("Valores aceitos\n");
	} else {
		printf("Valores nao aceitos\n");
	}

}
