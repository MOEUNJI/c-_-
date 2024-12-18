#include <stdio.h>
main(void) {
	printf("===============3차원이론============= \n");

	int intArr[2][3][4];
	printf("%d \n", sizeof(intArr)); // 이게 뭘 출력하는걸까? 물어보기

	// 정답 : 메모리의 크기를 출력한다. 12*2 = 24 개의 배열을 만들었고,
	// int는 4바이트니까 24*4를 하면 총 메모리의 바이트 수(96)가 나올것이다. 
	// 즉 intArr은 96바이트의 크기를 가지고 있는 것!

	printf("===============3차원선언 및 접근하기============= \n");

	int i, j; // 출력시 사용할 인덱스 변수를 미리 선언
	int arr[2][3][4] = {
		// 12개짜리 방이 2개 겹쳐있어서 총 24개의 메모리를 저장할 수 있는 배열을 생성한것
		{
		   { 1,2,3,4 },
		   {5,6,7,8},
		   {9,10,11,12}
		   //  [2]중에 1층 완성 : 이 층의 인덱스는 [0]임 
		},
		{
		   {21,22,23,24},
		   {25,26,27,28},
		   {29,30,31,32}
		   //  [2]중에 2층 완성 : 이 층의 인덱스는 [1]
		}
	};

	for (i = 0; i < 3; i++) { // 행반복
		for (j = 0; j < 4; j++) { // 열반복
			printf("%d", arr[0][i][j]);
		}
		printf("\n");
	}
	printf("\n");
	// [2]중의 [0]번째 인덱스를 출력함

	for (i = 0; i < 3;i++) {
		for (j = 0;j < 4; j++) {
			printf("%d", arr[1][i][j]);
		}
		printf("\n");
	}
	// [2]중의 [1]번째 인덱스를 출력함
	return 0;
}