#include <stdio.h>
main(void) {
    printf("===========�ݺ��� : for�� ������±� ����============== \n");

    int square;
    for (square = 1; square <= 10; square++) {
        printf("%d �� ���� : %d \n", square, square * square);
    }
    return 0;
}