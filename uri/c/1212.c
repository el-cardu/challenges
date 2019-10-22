#include <stdio.h>

int main() {

    int A1 = 1, A2 = 1, carry = 0, N1 = 1, N2 = 1, digitoN1, digitoN2, contaCarry = 0;

    while (1) {
        contaCarry = 0;
        scanf("%d %d", &A1, &A2);

        if (A1 == 0 && A2 == 0) {
            break;
        }

        N1 = A1;
        N2 = A2;

        if (N1 == 0 && N2 == 0) {
            continue;
        }

        while (1) {
            digitoN1 = N1 % 10;
            digitoN2 = N2 % 10;
            if (carry + digitoN1 + digitoN2 >= 10) {
                contaCarry++;
                carry = 1;
            } else {
                carry = 0;
            }

            if (N1 == 0 && N2 == 0) {
                break;
            }

            N1 /= 10;
            N2 /= 10;
        }

        if (contaCarry == 0) {
            printf("No carry operation.\n");
        } else if (contaCarry == 1) {
            printf("1 carry operation.\n");
        } else {
            printf("%d carry operations.\n", contaCarry);
        }

    }
    return 0;

}