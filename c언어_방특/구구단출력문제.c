#include <stdio.h>
main(void) {

    printf("===============구구단출력문제===============\n");

    int mcTableFirst;
    int mcTableSecond;

    for (mcTableFirst = 2; mcTableFirst <= 9; mcTableFirst++) {
        printf("%d단 \n", mcTableFirst);
        for (mcTableSecond = 1; mcTableSecond <= 10; mcTableSecond++) {
            printf("%d X %d = %d \n", mcTableFirst, mcTableSecond, mcTableFirst * mcTableSecond);
        }
        printf("\n");
    }
    return 0;
}