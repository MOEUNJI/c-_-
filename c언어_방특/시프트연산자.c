#include <stdio.h>
main(void) {

	printf("==============����Ʈ������==============\n");

	int bitFive = 5;     // 0101
	int bitThree = 3;  // 0011

	printf("bitFive << 1 = %d\n", bitFive << 1);
	// 5(10����) 00000101�̾��� ���� �������� 1ĭ �̵� 00001010�� ��
	// 00001010 = �̷��� �ϸ� 10������ ����غ��� 2���� 10�� ��
	printf("bitFive << 2 = %d\n", bitFive << 2); // �������� 2ĭ �̵�: 00010100 = 5�� 4���� 20
	printf("bitFive << 3 = %d\n", bitFive << 3); // �������� 3ĭ �̵�: 00101000 = 5�� 8���� 40
	printf("bitFive << 4 = %d\n", bitFive << 4); // �������� 4ĭ �̵�: 01010000 = 5�� 16���� 80

	int bitTwenty = 20; // 20 = 00010100 (2����)
	printf("bitTwenty >> 1 = %d\n", bitTwenty >> 1); // ���������� 1ĭ �̵�: 00001010 = 10
	printf("bitTwenty >> 2 = %d\n", bitTwenty >> 2); // ���������� 2ĭ �̵�: 00000101 = 5

	return 0;
}