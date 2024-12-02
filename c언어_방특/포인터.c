#include <stdio.h>
main(void) {
	printf("===============포인터===============\n");
	int x = 10;
	//printf("%p", &x);
	// &x는 변수의 주소를 뜻함 (주소를 가져올 땐 &사용한다.)
	// %p : 포인터의 주소값을 가져올 때 사용한다.

	int* pointerVariable = &x;
	// 변수 앞에 * 를 붙이면 주소가 가지고 있는 값을 담을 수 있는 변수가 된다.
	// 이를 역참조라고 한다

	printf("%d \n", *pointerVariable);

	printf("===============포인터 초기화 ===============\n");

	int pointerNum = 30;
	int* pna;
	pna = &pointerNum;

	printf("%d \n", *pna);
	return 0;
}