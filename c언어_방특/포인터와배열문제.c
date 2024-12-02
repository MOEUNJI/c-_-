#include <stdio.h>
main(void) {
    printf("=============문제============== \n");
    short shortNum[3] = { 1,2,3 };
    int intNum[3] = { 10,20,30 };

    // 인덱스 번호를 통한 접근
    printf("%d %d %d \n", shortNum[0], shortNum[1], shortNum[2]);
    printf("%d %d %d \n", intNum[0], intNum[1], intNum[2]);
    printf("\n");
    // 포인터 연산을 통한 접근
    printf("%d %d %d \n", *shortNum, *(shortNum + 1), *(shortNum + 2));
    printf("%d %d %d \n", *intNum, *(intNum + 1), *(intNum + 2));
    printf("\n");
    // 주소가 같은지 확인
    printf("%p %p %p \n", &shortNum[0], &shortNum[1], &shortNum[2]);
    printf("%p %p %p \n", &intNum[0], &intNum[1], &intNum[2]);
    return 0;
}