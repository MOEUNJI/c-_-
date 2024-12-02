#include <stdio.h>
main(void) {
	printf("=================else if===================== \n");
	/*
	if(조건문){
		조건을 만족할 경우 실행
	} else if (조건문2){
			조건문 2의 조건을 만족할 때 실행
		}
		 else if (조건문3){
			조건문 3의 조건을 만족할 때 실행
		}
		 else if (조건문4){
			조건문 4의 조건을 만족할 때 실행
		}
		else {
			모든 조건이 만족하지 않을 경우실행
		}
	}
	*/

	int numA = 1;
	if (numA > 3) {
		printf("고양이 \n");
	}
	else if (numA == 1) {
		printf("강아지 \n");
	}
	else {
		printf("햄스터 \n");
	}
	return 0;
}