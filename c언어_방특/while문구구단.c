#include <stdio.h>
main(void) {

    printf("===========�ݺ��� : while������ ������ 6�� �����============== \n");

    int six = 1;
    while (six <= 60) {
        if (six % 6 == 0) {
            printf("%d \n", six);
        }
        six++;
    }
	return 0;
}