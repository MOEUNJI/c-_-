#include <stdio.h>
main(void) {
    printf("===============while continue문 문제===============\n");
    int whileConNum = 0; // 초기화

    while (whileConNum <= 10) {// 0부터 10까지 반복
        whileConNum++;// 먼저 값을 증가
        if (whileConNum % 2 != 0) { // 홀수라면
            continue; // 아래 코드를 건너뛰고 다음 반복으로 넘어간다.
        }
        printf("%d \n", whileConNum);// 짝수만 출력된다 
    }
	return 0;
}