#include <stdio.h>
main(void) {

    printf("===============��������¹���===============\n");

    int mcTableFirst;
    int mcTableSecond;

    for (mcTableFirst = 2; mcTableFirst <= 9; mcTableFirst++) {
        printf("%d�� \n", mcTableFirst);
        for (mcTableSecond = 1; mcTableSecond <= 10; mcTableSecond++) {
            printf("%d X %d = %d \n", mcTableFirst, mcTableSecond, mcTableFirst * mcTableSecond);
        }
        printf("\n");
    }
    return 0;
}