#include <stdio.h>

main(void) {

	printf("==============산술연산자 시작==============\n");
	// 산술연산자의 종류와 기본형
	// 1. a + b 더하기
	// 2. a - b 빼기
	// 3. a * b 곱하기
	// 4. a / b 나누기
	// 5. a % b 나머지

	int number1 = 7, number2 = 3;

	printf("%d + %d = %d \n", number1, number2, number1 + number2);
	printf("%d - %d = %d \n", number1, number2, number1 - number2);
	printf("%d * %d = %d \n", number1, number2, number1 * number2);
	printf("%d / %d = %d \n", number1, number2, number1 / number2);
	printf("%d %% %d = %d \n", number1, number2, number1 % number2);

	// 피연산자의 자료형에 따른 결과값의 자료형
	 /*
	int, int = int
	int, float = float
	int, char = int
	char, char = char
	char, float = float
	float, float = float
	*/

	return 0;

}


