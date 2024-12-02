#include <stdio.h>
main(void) {
    printf("===============continue문===============\n");

    /*
        for(초기값; 조건식; 증감식){
        continue;
        실행할 코드;
    }
===================================
        let 변수 = 초기값;

        while(조건식){
            증감식;
            continue;
            실행할 코드
        }

        //continue의 역할
        //continue는 반복문의 현재 반복을 중단하고 다음 반복으로 바로 넘어갑니다.
        //즉, continue 아래의 코드는 실행되지 않습니다.
        */

    int continueNum;
    for (continueNum = 0; continueNum <= 10; continueNum++) {
        if (continueNum % 2 == 0) { // continueNum이 짝수인지 확인
            continue; // 짝수면 아래 코드를 건너뛰고 다음 반복으로 넘어감
        }
        printf("%d \n", continueNum);
    }
	return 0;
}