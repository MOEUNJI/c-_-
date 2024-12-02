#include <stdio.h>
main(void) {

    printf("===========반복문 : 사용자가 0을 입력할때까지 출력============== \n");

    int num;

    printf("숫자를 입력하세요 (0을 입력하면 종료): ");
    scanf_s("%d", &num);

    while (num != 0) { // 입력값이 0이 아니면 반복
        printf("입력한 숫자: %d\n", num);
        printf("다시 입력하세요 (0을 입력하면 종료): ");
        scanf_s("%d", &num);
    }

    printf("프로그램을 종료합니다.\n");
	return 0;
}