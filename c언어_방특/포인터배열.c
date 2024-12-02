#include <stdio.h>
main(void) {
    printf("=============포인터배열============== \n");

    // 일반 변수 선언
    int  n1 = 1, n2 = 6, n3 = 9;

    // 포인터 변수를 선언 및 초기화
    int* n1Address = &n1;
    int* n2Address = &n2;
    int* n3Address = &n3;

    // 포인터 배열의 선언 및 초기화
    int* Addresses[3] = { n1Address,n2Address,n3Address };

    printf("%d %d %d \n", *Addresses[0], *Addresses[1], *Addresses[2]);
    printf("%d %d %d \n", Addresses[0], Addresses[1], Addresses[2]);

    //int * intArray[10]; // 길이가 10인 int형 포인터 배열을 생성함
    //double* dbArray[20]; // 길이가 20인 더블 포인터 배열 생성

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

    printf("홀수의 총 합: %d\n", oddSum); // 결과(16) 출력
    return 0;
}