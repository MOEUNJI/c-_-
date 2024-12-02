#include <stdio.h>
main(void) {

	printf("==============비교연산자 시작==============\n");
	//비교연산자 종류
	// a > b (a가 b보다 크다)
	// a < b (a가 b보다 작다)
	// a >= b (a가 b보다 크거나 같다)
	// a <= b (a가 b보다 작거나 같다)
	// a == b (a와 b는 같다)
	// a != b (a와 b는 다르다)

	int a = 1, b = 10;
	printf("a > b : %d\n", a > b); // 0
	printf("a < b : %d\n", a < b); // 1
	printf("a >= b : %d\n", a >= b); // 0
	printf("a <= b : %d\n", a <= b); // 1
	printf("a == b : %d\n", a == b); // 0
	printf("a != b : %d\n", a != b); // 1
	return 0;
}