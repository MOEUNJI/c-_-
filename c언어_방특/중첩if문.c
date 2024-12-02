#include <stdio.c>
main(void) {
	printf("============중첩if문=========== \n");

	/*
	if(조건식1){
		if(조건식2){
			조건식 1과 2를 모두 만족할 경우 코드 실행;
		}
	}
	*/

	int studentNum = 241125, studentNumCheck;
	int password = 112233, passwordCheck;

	printf("학번을 입력해주세요 : ");
	scanf_s("%d", &studentNumCheck);

	printf("비밀번호를 입력해주세요 :");
	scanf_s("%d", &passwordCheck);

	if (studentNum == studentNumCheck) {
		if (password == passwordCheck) {
			printf("%d 님 로그인 되었습니다.", studentNumCheck);
			// 아이디와 비밀번호가 모두 일치할 경우
		}
		else {
			printf("비밀번호가 일치하지 않습니다.");
			// 아이디는 맞고 비밀번호가 틀릴경우
		}
	}
	else {
		printf("아이디가 일치하지 않습니다.");
		// 아이디가 일치하지 않을경우
	}
	return 0;
}