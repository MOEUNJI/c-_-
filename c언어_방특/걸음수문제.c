#include <stdio.h>
main(void) {

	printf("=================������ ����===================== \n");

	int walkCount;
	printf("����� �Ϸ� �� �� �����ó���?");
	scanf_s("%d", &walkCount);

	if (walkCount > 10000) {
		printf("�Ϸ翡 %d�� �ȴٴ� ����ؿ�! ���� �����Դϴ�:) \n", walkCount);
	}

	return 0;
}