#include <stdio.h>
main(void) {
	printf("=================학점 문제===================== \n");

	int score;
	printf("점수를 입력해주세요 : ");
	scanf_s("%d", &score);

	if (score >= 90) {
		printf("%d 점은 A학점입니다. 참 잘했어요~ \n", score);
	}
	else if (score >= 80) {
		printf("%d 점은 B학점입니다. \n", score);
	}
	else if (score >= 70) {
		printf("%d 점은 C학점입니다. \n", score);
	}
	else if (score >= 60) {
		printf("%d 점은 D학점입니다. \n", score);
	}
	else {
		printf("재시험 당첨 \n", score);
	}

	return 0;
}