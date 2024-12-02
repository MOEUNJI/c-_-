#include <stdio.h>
main(void) {
	
	printf("=================else===================== \n");
	/*
	if(조건식) {
		조건의 값이 true라면 이 코드가 실행됨
	} else {
		조건의 값이 false라면 이 값이 실행됨
	}
	*/
	char alpha = 'A';
	if (alpha == 'B') {
		printf("alpha는 B와 같습니다. \n");
	}
	else {
		printf("alpha는 B와 다릅니다. \n");
	}

	printf("=================당신이 좋아하는 숫자는?===================== \n");
	int likeNumber;
	printf("당신이 좋아하는 숫자를 입력하세요 : ");
	scanf_s("%d", &likeNumber);

	if (likeNumber >= 10) {
		printf("당신이 좋아하는 숫자는 10 이상이군요 \n");
	}
	else {
		printf("당신이 좋아하는 숫자는 10 미만이군요 \n");
	}
	return 0;

}