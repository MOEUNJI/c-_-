#include <stdio.h>
main(void) {
    printf("=============�����͹迭============== \n");

    // �Ϲ� ���� ����
    int  n1 = 1, n2 = 6, n3 = 9;

    // ������ ������ ���� �� �ʱ�ȭ
    int* n1Address = &n1;
    int* n2Address = &n2;
    int* n3Address = &n3;

    // ������ �迭�� ���� �� �ʱ�ȭ
    int* Addresses[3] = { n1Address,n2Address,n3Address };

    printf("%d %d %d \n", *Addresses[0], *Addresses[1], *Addresses[2]);
    printf("%d %d %d \n", Addresses[0], Addresses[1], Addresses[2]);

    //int * intArray[10]; // ���̰� 10�� int�� ������ �迭�� ������
    //double* dbArray[20]; // ���̰� 20�� ���� ������ �迭 ����

    int fiveArr[5] = { 10, 20, 30, 40, 50 };
    int* fiveArrPointer = fiveArr;

    for (int i = 0; i <= 4; i++) {
        printf("%d \n", *(fiveArrPointer + i));
    }


    int eightArr[8] = { 1,2,3,4,5,6,7,8 };
    int* lastEightPointer = eightArr + 7;
    int oddSum = 0;

    for (int j = 7; j >= 0; j--) {
        int allValue = *(lastEightPointer - j);
        if (allValue % 2 != 0) {
            oddSum += allValue;
        }
    }

    printf("Ȧ���� �� ��: %d\n", oddSum); // ���(16) ���
    return 0;
}