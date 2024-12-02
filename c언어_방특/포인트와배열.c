#include <stdio.h>

main(void) {

    printf("=============포인터와 배열============== \n");

    int arr[3] = { 10, 20, 30 };
    int* arrAddress = arr; // 배열의 이름을 포인터 변수에 저장 10의 주소를 가지고 있음

    printf("배열의 이름: %p\n", arr);      // 배열의 시작 주소
    printf("첫 번째 요소: %p\n", &arr[0]); // 첫 번째 요소의 주소
    printf("첫 번째 값: %d\n", *arr);     // 첫 번째 요소의 값 (역참조)

    printf("포인터로 첫 번째 값: %d\n", *arrAddress);    // 첫 번째 값
    printf("포인터로 두 번째 값: %d\n", *(arrAddress + 1)); // 두 번째 값
    printf("포인터로 세 번째 값: %d\n", *(arrAddress + 2)); // 세 번째 값

    //arrAddress[0] = arr[0];
    //arrAddress[1] = arr[1];
    //arrAddress[2] = arr[2];

    printf("=============포인터상수란============== \n");

    int x = 10, y = 20;
    int* const constant = &x; // 포인터 상수 생성
    // *은 주소에 들어있는 값에 접근할 수 있는 연산자

    *constant = 30;
    // * 은 주소에 들어있는 값에 접근할 수 있으므로 값을 변경할 수 있다.
    //constant = &y;
    // 상수로 선언된 포인터는 주소값을 변경할 수 없다.
    // 위에 const로 선언된 const부분을 지우면 변경 가능해진다. 

    printf("=============포인터를 이용한 배열의 연산============== \n");

    int arr2[3] = { 1,2,3 };
    printf("%d \n", arr2[0]);
    printf("%d \n", *(arr2 + 1));

    return 0;


}