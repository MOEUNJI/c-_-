#include <stdio.h>
main(void) {
	printf("==============지하철요금==============\n");

	int userAge;
	printf("나이를 입력해주세요 :");
	scanf_s("%d", &userAge);

	int minorCheck = userAge >= 20 ? 1280 : 800;
	printf("%d 세의 지하철 요금은 : %d 입니다.", userAge, minorCheck);
	return 0;
}