#include <stdio.h>

int main() {

	int T, i;
	scanf("%d\n", &T);

	for(i = 1; i <= T; i++) {
		int R1, R2;
		scanf("%d %d", &R1, &R2);
		printf("%d\n", R1 + R2);
	}

	return 0;
}
