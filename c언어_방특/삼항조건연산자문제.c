#include <stdio.h>
main(void) {

	printf("==============삼항조건연산자문제==============\n");

	int inputNumber;
	int startResult;

	printf("숫자를 입력하세요: ");
	scanf_s("%d", &inputNumber); // 사용자로부터 정수 입력 받기

	startResult = (inputNumber % 2 == 0) ? 0 : 1; // 짝수면 0, 홀수면 1

	printf("입력한 숫자는 %d 이며, 결과: %d\n", inputNumber, startResult);
	return 0;
}