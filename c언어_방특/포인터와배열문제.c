#include <stdio.h>
main(void) {
    printf("=============����============== \n");
    short shortNum[3] = { 1,2,3 };
    int intNum[3] = { 10,20,30 };

    // �ε��� ��ȣ�� ���� ����
    printf("%d %d %d \n", shortNum[0], shortNum[1], shortNum[2]);
    printf("%d %d %d \n", intNum[0], intNum[1], intNum[2]);
    printf("\n");
    // ������ ������ ���� ����
    printf("%d %d %d \n", *shortNum, *(shortNum + 1), *(shortNum + 2));
    printf("%d %d %d \n", *intNum, *(intNum + 1), *(intNum + 2));
    printf("\n");
    // �ּҰ� ������ Ȯ��
    printf("%p %p %p \n", &shortNum[0], &shortNum[1], &shortNum[2]);
    printf("%p %p %p \n", &intNum[0], &intNum[1], &intNum[2]);
    return 0;
}