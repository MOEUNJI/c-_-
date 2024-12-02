#include <stdio.h>
main(void) {

    printf("===========반복문 : while문으로 구구단 6단 만들기============== \n");

    int six = 1;
    while (six <= 60) {
        if (six % 6 == 0) {
            printf("%d \n", six);
        }
        six++;
    }
	return 0;
}