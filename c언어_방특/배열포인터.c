#include <stdio.h>

main(void) {

	printf("=================배열포인터==================\n");

	int threeArr[3] = { 10,20,30 }; // 크기가 3인 배열
	int (*pointerArr)[3]; // 배열포인터 선언
	pointerArr = &threeArr; // 배열의 주소를 배열포인터에 저장
	// pointerArr은 threeArr의 주소를 가리키게 된다.

	for (int i = 0; i < 3;i++) {
		printf("%d \n", (*pointerArr)[i]);
		// 배열포인터를 사용해서 배열의 값 출력
	}

	printf("=================문자열의 표현==================\n");

	char good[4] = "good";
	// good자체는 배열의 시작 주소를 나타내는 상수로 사용될것이며
	// 배열의 시작 주소를 바꿀 수 없다!(자동으로 g로 생성됨)
	char* bad = "bad";
	// bad는 bad의 시작 주소를 저장하는 읽기전용 포인터변수이다.
	// bad는 포인터 포인터라서 주소값을 변경할 수 있다.
	// 복제공간 없이 그냥 원본 상수값을 포인터하고 있기에 수정이 불가능하다.


	good[0] = 'H'; // 가능 (Hood로 변경될것!)
	// 이게 가능한 이유는 복제된 배열의 내용을 수정하는 행위이기 때문
	//good = "new good"; // 에러날것! 
	// 에러나는 이유 : good은 배열의 이름이자 배열의 시작을 가리키는 상수다.
	// 즉 해당 행위는 주소를 변경하려는 행위인것 (불가능!)

	bad[0] = 's'; // 에러
	// bad는 읽기전용 메모리 영역에 저장되어 있어서 내용을 변경할 수 없음
	bad = "new bad";
	// 가능하다!  여기서 bad라는 포인터 변수에 새로운 문자열 new bad의 주소를
	// 저장하는것! 이건 포인트의 주소를 바꾸는 행위로 문제없이 동작한다.


	printf("%s %s", good, bad);

	return 0;
}