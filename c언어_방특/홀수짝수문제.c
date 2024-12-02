#include <stdio.h>
main(void) {

	printf("=================홀수 짝수 문제===================== \n");
	int oddEvenNumber;
	printf("당신이 좋아하는 숫자를 입력하세요 : ");
	scanf_s("%d", &oddEvenNumber);

	if (oddEvenNumber % 2 == 0) {
		printf("당신이 입력한 숫자 %d 는 짝수입니다. \n", oddEvenNumber);
	}
	else {
		printf("당신이 입력한 숫자는 : %d이며 홀수입니다. \n", oddEvenNumber);
	}
	return 0;
}