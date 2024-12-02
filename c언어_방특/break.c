#include <stdio.h>

main(void) {

    printf("===============break문===============\n");

    /*
        - for문 break사용법
        for(초기값; 조건식; 증감식){
            break; // 반복문을 강제로 종료한다.
            자바스크립트 코드;
        }

        - while문 break사용법
        let 변수 = 초기값;
        while(조건식){
            break; //반복문을 강제로 종료
            실행할 코드;
            증감식;
        }

    */
    printf("===============for break문===============\n");
    int breakFor;
    for (breakFor = 0; breakFor <= 10; breakFor++) {
        if (breakFor == 6) {
            break;
        }
        printf("%d \n", breakFor);
    }
