#include <stdio.h>
main(void) {

	printf("==============�������ǿ����ڹ���==============\n");

	int inputNumber;
	int startResult;

	printf("���ڸ� �Է��ϼ���: ");
	scanf_s("%d", &inputNumber); // ����ڷκ��� ���� �Է� �ޱ�

	startResult = (inputNumber % 2 == 0) ? 0 : 1; // ¦���� 0, Ȧ���� 1

	printf("�Է��� ���ڴ� %d �̸�, ���: %d\n", inputNumber, startResult);
	return 0;
}