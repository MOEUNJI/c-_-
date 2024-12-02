#include <stdio.h>
main(void) {

	printf("==============증감연산자 시작==============\n");
	// 연산자인 증감연산자는 변수의 어디에 위치해 있어도 증가와 감소라는 본연의 역할을 한다.
	// 감소연산
	// 변수--; 또는 --변수;

	//증가연산
	// 변수++; 또는 ++변수;

	 //========= ++변수 와  변수++ 의 차이점============
	 // int a = ++b;
	// 먼저 ++b가 실행되어 b의 증가연산자가 먼저 실행되고, 증가된 b의 값을 a에 대입한다.

	// int a = b++;
	// a에다 b값을 먼저 대입한 후 b의 값을 증가시키는 증가식 실행

	int putA = 10, putB = 20;
	printf("A : %d\n", putA);
	printf("A : %d\n", ++putA);
	printf("A : %d\n", putA);

	printf("\n");

	printf("B : %d\n", putB);
	printf("B : %d\n", putB++);
	printf("B : %d\n", putB);
	return 0;
}