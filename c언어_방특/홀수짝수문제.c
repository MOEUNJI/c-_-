#include <stdio.h>
main(void) {

	printf("=================Ȧ�� ¦�� ����===================== \n");
	int oddEvenNumber;
	printf("����� �����ϴ� ���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &oddEvenNumber);

	if (oddEvenNumber % 2 == 0) {
		printf("����� �Է��� ���� %d �� ¦���Դϴ�. \n", oddEvenNumber);
	}
	else {
		printf("����� �Է��� ���ڴ� : %d�̸� Ȧ���Դϴ�. \n", oddEvenNumber);
	}
	return 0;
}