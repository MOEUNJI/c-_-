#include <stdio.h>
main(void) {
	printf("==============����ö���==============\n");

	int userAge;
	printf("���̸� �Է����ּ��� :");
	scanf_s("%d", &userAge);

	int minorCheck = userAge >= 20 ? 1280 : 800;
	printf("%d ���� ����ö ����� : %d �Դϴ�.", userAge, minorCheck);
	return 0;
}