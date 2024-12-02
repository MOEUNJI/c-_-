#include <stdio.h>
main(void) {
	printf("==============대입연산자 시작==============\n");
	// 대입연산자 종류
	// a = b : a = b
	// a += b : a = a+b 더한것을 대입
	// a -= b : a = a-b 더한것을 대입
	// a *= b : a = a*b 곱한것을 대입
	// a /= b : a = a/b 나눈것을 대입  
	// a %= b : a = a%b 나머지를 대입

	int num1 = 3, num2 = 4;

	num1 += 3; // num1 = num1 + 3
	num2 *= 4; // num2 = num2 * 4

	printf("num1 += 3 의 결과는 : %d\n", num1);
	printf("num2 *= 4의 결과는 : %d\n", num2);
	return 0;
}