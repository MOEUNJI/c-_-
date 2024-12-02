#include <stdio.h>

main(void) {

	printf("===============배열===============\n");

	// 배열의 이름(변수와 동일) - numbers
	// 배열에 담을 자료형 - int
	// 배열의 길이 - 배열에 포함될 데이터의 개수[5]

	int numbers[5] = { 10, 20, 30, 40, 50 };
	//int numbers[] = { 1,2,3 };

	//numbers[인덱스번호]
	printf("%d \n", numbers[0]);

	numbers[0] = 100;
	printf("%d \n", numbers[0]);

	int index;
	int odd[3]; // 초기화 되지 않은 배열
	int even[5] = { 2,4,6,8,10 }; //배열 선언 및 초기화 동시 진행

	//배열의 개별 요소 초기화
	odd[0] = 1;
	odd[1] = 3;
	odd[2] = 5;

	// 개별 요소에 접근하기
	printf("odd 의 배열 값 : 인덱스번호0(%d) 인덱스번호1(%d) 인덱스번호2(%d) \n", odd[0], odd[1], odd[2]);

	for (index = 0; index < 5; index++) {
		printf("%d", even[index]);
	}
	printf("\n");
	// 이 코드에서 index의 역할은 배열의 각 요소에 접근하기 위한 인덱스 변수이다.
	// 이 코드에서는 index가 0부터 4까지 증가하며 배열의 각 칸(even[index])을 순서대로 처리합니다.
	// index에 0을 넣어준 후 5보다 작을때까지 늘어나라고 선언했기 때문에 0-4까지의 숫자를 가진다.
	return 0;
}