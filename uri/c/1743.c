#include <stdio.h>

int main() {

    int primeiro_plug[5], segundo_plug[5], i = 0;
    char compativel = 'Y';

    for (i = 0; i <= 4; i++) {
        scanf("%d", &primeiro_plug[i]);
    }

    for (i = 0; i <= 4; i++) {
        scanf("%d", &segundo_plug[i]);
    }

    for (i = 0; i <= 4; i++) {
        if (primeiro_plug[i] == segundo_plug[i]) {
            compativel = 'N';
        }
    }

    printf("%c\n", compativel);

    return 0;

}
