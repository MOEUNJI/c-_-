#include <stdio.h>
main(void) {
	printf("===============문자열 변수 표현===============\n");

	char stringText[] = "안녕하세요!";
	printf("문자열 변수 배열 stringText 의 길이는 : %d \n", sizeof(stringText));
	// sizeof 란? 배열 전체의 메모리 크기를 반환한다. 

	char englishText[] = "hello!";
	printf("배열 englishText 의 길이는 : %d \n", sizeof(englishText));

	char longText[50] = "This is long";
	// 배열의 전체 크기
	printf("배열 longText의 전체 크기: %d \n", sizeof(longText)); // 50
	// 문자열의 실제 길이
	printf("배열 longText에 저장된 문자열의 길이: %d \n", strlen(longText)); // 11
	printf("%s \n", longText);

	char question[30] = "My name is 모은지";
	printf("%s \n", question);

	question[10] = '\0';
	printf("%s \n", question);

	printf("===============scanf_s를 통한 문자열 입력===============\n");

	char scanfString[50]; // 배열의 크기를 정해줌
	printf("문자열을 입력하세요 : ");
	scanf_s("%s", scanfString, sizeof(scanfString));
	// scanf_s로 문자열을 받을 때는 받아온 값을 넣을 변수 앞에 & 연산자를 사용하지 않는다!!!!
	// scanf와 달리 scanf_s는 문자열을 받아오려면 sizeof로 받아올 변수의 배열공간을 확인해야함
	printf("입력된 문자열 : %s \n", scanfString);

	return 0;
}