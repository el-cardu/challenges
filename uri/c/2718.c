#include <stdio.h>

int main() {

    long long int N, num, contaUm = 0, maior = 0;
    scanf("%lld", &N);

    while (N > 0) {

        scanf("%lld", &num);
        
        while (num != 0) {
            if (num % 2) {
                contaUm++;
                if (contaUm >= maior) {
                    maior = contaUm;
                }
            } else {
                contaUm = 0;
            }
            num /= 2;
        }

        printf("%lld\n", maior);

        contaUm = 0;
        maior = 0;
        N--;
    }

    return 0;

}