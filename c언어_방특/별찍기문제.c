#include <stdio.h>
main(void) {
    printf("===============����� ����===============\n");
    int line;
    int star;

    for (line = 5; line >= 1; line--) {
        for (star = 1; star <= line; star++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;

}