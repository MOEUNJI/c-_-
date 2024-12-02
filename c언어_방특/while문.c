#include <stdio.h>
main(void) {

    printf("===========반복문 : while문============== \n");

    /*
    자료형 변수명 = 초기값;
    while(조건){
        반복시키고자 하는 코드 작성
        증감식;
    }
    */

    int hi = 1;
    while (hi <= 10) {
        printf("안녕하세요 %d \n", hi);
        hi++;
    }
	return 0;
}