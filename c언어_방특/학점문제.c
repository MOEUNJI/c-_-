#include <stdio.h>
main(void) {
	printf("=================���� ����===================== \n");

	int score;
	printf("������ �Է����ּ��� : ");
	scanf_s("%d", &score);

	if (score >= 90) {
		printf("%d ���� A�����Դϴ�. �� ���߾��~ \n", score);
	}
	else if (score >= 80) {
		printf("%d ���� B�����Դϴ�. \n", score);
	}
	else if (score >= 70) {
		printf("%d ���� C�����Դϴ�. \n", score);
	}
	else if (score >= 60) {
		printf("%d ���� D�����Դϴ�. \n", score);
	}
	else {
		printf("����� ��÷ \n", score);
	}

	return 0;
}