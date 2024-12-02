#include <stdio.h>
main(void) {

	printf("=================걸음수 문제===================== \n");

	int walkCount;
	printf("당신은 하루 몇 보 걸으시나요?");
	scanf_s("%d", &walkCount);

	if (walkCount > 10000) {
		printf("하루에 %d보 걷다니 대단해요! 좋은 습관입니다:) \n", walkCount);
	}

	return 0;
}