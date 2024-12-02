#include <stdio.h>
main(void) {

	printf("=================복합조건 버스요금===================== \n");

	int userAge;
	printf("나이를 입력해주세요 : ");
	scanf_s("%d", &userAge);

	if (userAge >= 0 && userAge <= 7) {
		printf("0~7세 유아 버스비는 800원 입니다.");
	}
	else if (userAge >= 8 && userAge <= 19) {
		printf("8~19세 학생 버스비는 1,200원 입니다.");
	}
	else if (userAge >= 20 && userAge <= 34) {
		printf("20~34세 청년 버스비는 1,600원 입니다.");
	}
	else if (userAge >= 35 && userAge <= 59) {
		printf("35~59세 중년 버스비는 2,000원 입니다.");
	}
	else if (userAge >= 60 && userAge <= 150) {
		printf("60~150세 노년 버스비는 무료 입니다.");
	}
	else {
		printf("무언가 잘못되었다... 사람의 나이가 어떻게 %d살..?", userAge);
	}

	return 0;
}