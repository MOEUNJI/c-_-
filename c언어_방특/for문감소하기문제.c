#include <stdio.h>
main(void) {
    printf("===========반복문 : for문 ============== \n");

    /*
    for(초기값; 조건식; 증감식){
        조건이 참이라면 실행시킬 코드;
    }

    초기값 : 반복의 조건 검사를 위해 사용하는 변수의 선언 및 초기화
    조건식 : 반복의 조건을 검사하는 식이다. 참 또는 거짓으로 만족 여부를 검사함
    증감식 : 반복의 조건 충족 여부에 따라 변수가 증감한다.
    */

    int forNumber;

    for (forNumber = 1; forNumber <= 10; forNumber++) {
        printf("반복 %d  \n", forNumber);
    }
    return 0;
}