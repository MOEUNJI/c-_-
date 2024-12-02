#include <stdio.h>
main(void) {
	printf("===============2차원배열 문제============= \n");

	int qArr[2][3];
	int plus = 1;
	int* qArrPointer = qArr;

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			qArr[i][j] = plus++;
			*(qArrPointer + 2) = 30;
			printf("%d", qArr[i][j]);
		}
		printf("\n");
	}
	return 0;
}