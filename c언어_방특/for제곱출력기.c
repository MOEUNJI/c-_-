#include <stdio.h>
main(void) {
    printf("===========반복문 : for문 제곱출력기 문제============== \n");

    int square;
    for (square = 1; square <= 10; square++) {
        printf("%d 의 제곱 : %d \n", square, square * square);
    }
    return 0;
}