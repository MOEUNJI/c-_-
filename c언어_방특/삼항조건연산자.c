#include <stdio.h>
main(void) {

	printf("==============�������ǿ�����==============\n");

	// ���ǽ�? ������ �̰� ��µ˴ϴ�(true) : Ʋ���� �̰� ��µ˴ϴ�.(false);
	int ten = 10, twenty = 20;
	int max;

	max = ten > twenty ? ten : twenty; // ten��  twenty �� �� ū ���� ����

	printf("�� ū ���� : %d\n", max);
	return 0;
}