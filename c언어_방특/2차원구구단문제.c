#include <stdio.h>
main(void) {
	printf("===============�����ܹ���============= \n");

	int gugudan[9][9];

	// ������ ��� �� �迭�� ����
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			gugudan[i][j] = (i + 1) * (j + 1);
		}
	}

	// ������ ���
	for (int i = 0; i < 9;i++) {
		printf("%d �� \n", i + 1);
		for (int j = 0; j < 9; j++) {
			printf("%d X %d = %d \n", i + 1, j + 1, gugudan[i][j]);
		}
		printf("\n");
	}
	return 0;
}