#include <stdio.h>
main(void) {

    printf("===========반복문 : do while문 ============== \n");

    /*
    자료형 변수 = 초기화;
    do{
        실행시킬 코드;
        증감식;
    }while(조건식);
    */

    int doWhile = 1;
    do {
        printf("do while문 %d 번 실습중! \n", doWhile);
        doWhile++;
    } while (doWhile >= 10);
	return 0;
}