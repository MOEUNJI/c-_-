#include <stdio.h>
main(void) {

	printf("==============삼항조건연산자==============\n");

	// 조건식? 맞으면 이게 출력됩니다(true) : 틀리면 이게 출력됩니다.(false);
	int ten = 10, twenty = 20;
	int max;

	max = ten > twenty ? ten : twenty; // ten과  twenty 중 더 큰 값을 선택

	printf("더 큰 값은 : %d\n", max);
	return 0;
}