#include <stdio.h>
main(void) {
	printf("===============구구단문제============= \n");

	int gugudan[9][9];

	// 구구단 계산 및 배열에 저장
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			gugudan[i][j] = (i + 1) * (j + 1);
		}
	}

	// 구구단 출력
	for (int i = 0; i < 9;i++) {
		printf("%d 단 \n", i + 1);
		for (int j = 0; j < 9; j++) {
			printf("%d X %d = %d \n", i + 1, j + 1, gugudan[i][j]);
		}
		printf("\n");
	}
	return 0;
}