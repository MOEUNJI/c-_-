#include <stdio.h>

main(void) {
	printf("=================if문===================== \n");
	/*if (조건식) {
			조건을 만족할 경우 실행할 코드 작성;
	}
	if문의 괄호 안에는 조건이 삽입된다. 조건이 참(true,1)일 경우에 중괄호 안에 있는 코드를 실행한다.
	*/

	/*
	if(조건식)
		조건을 만족할 경우 실행할 코드 작성;

	이렇게 실행할 코드가 한 줄뿐이면 중괄호를 생략해도 됨.
	*/

	int ifNumber = 10;

	if (ifNumber < 500) {
		printf("%d 이 500보다 작니? 참입니다. \n", ifNumber);
	}

	if (ifNumber == 3) {
		printf("%d 과 3은 같다 \n", ifNumber);
		// 거짓이므로 출력되지 않을것
	}
	return 0;

}