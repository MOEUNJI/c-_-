#include <stdio.h>
main(void) {
	printf("==============���Կ����� ����==============\n");
	// ���Կ����� ����
	// a = b : a = b
	// a += b : a = a+b ���Ѱ��� ����
	// a -= b : a = a-b ���Ѱ��� ����
	// a *= b : a = a*b ���Ѱ��� ����
	// a /= b : a = a/b �������� ����  
	// a %= b : a = a%b �������� ����

	int num1 = 3, num2 = 4;

	num1 += 3; // num1 = num1 + 3
	num2 *= 4; // num2 = num2 * 4

	printf("num1 += 3 �� ����� : %d\n", num1);
	printf("num2 *= 4�� ����� : %d\n", num2);
	return 0;
}