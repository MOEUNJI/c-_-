#include <stdio.h>
main(void) {

	printf("=================�������� �������===================== \n");

	int userAge;
	printf("���̸� �Է����ּ��� : ");
	scanf_s("%d", &userAge);

	if (userAge >= 0 && userAge <= 7) {
		printf("0~7�� ���� ������� 800�� �Դϴ�.");
	}
	else if (userAge >= 8 && userAge <= 19) {
		printf("8~19�� �л� ������� 1,200�� �Դϴ�.");
	}
	else if (userAge >= 20 && userAge <= 34) {
		printf("20~34�� û�� ������� 1,600�� �Դϴ�.");
	}
	else if (userAge >= 35 && userAge <= 59) {
		printf("35~59�� �߳� ������� 2,000�� �Դϴ�.");
	}
	else if (userAge >= 60 && userAge <= 150) {
		printf("60~150�� ��� ������� ���� �Դϴ�.");
	}
	else {
		printf("���� �߸��Ǿ���... ����� ���̰� ��� %d��..?", userAge);
	}

	return 0;
}