#include <stdio.h>
main(void) {
	printf("===============������===============\n");
	int x = 10;
	//printf("%p", &x);
	// &x�� ������ �ּҸ� ���� (�ּҸ� ������ �� &����Ѵ�.)
	// %p : �������� �ּҰ��� ������ �� ����Ѵ�.

	int* pointerVariable = &x;
	// ���� �տ� * �� ���̸� �ּҰ� ������ �ִ� ���� ���� �� �ִ� ������ �ȴ�.
	// �̸� ��������� �Ѵ�

	printf("%d \n", *pointerVariable);

	printf("===============������ �ʱ�ȭ ===============\n");

	int pointerNum = 30;
	int* pna;
	pna = &pointerNum;

	printf("%d \n", *pna);
	return 0;
}