#include <stdio.h>

main(void) {

	printf("==============��������� ����==============\n");
	// ����������� ������ �⺻��
	// 1. a + b ���ϱ�
	// 2. a - b ����
	// 3. a * b ���ϱ�
	// 4. a / b ������
	// 5. a % b ������

	int number1 = 7, number2 = 3;

	printf("%d + %d = %d \n", number1, number2, number1 + number2);
	printf("%d - %d = %d \n", number1, number2, number1 - number2);
	printf("%d * %d = %d \n", number1, number2, number1 * number2);
	printf("%d / %d = %d \n", number1, number2, number1 / number2);
	printf("%d %% %d = %d \n", number1, number2, number1 % number2);

	// �ǿ������� �ڷ����� ���� ������� �ڷ���
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


