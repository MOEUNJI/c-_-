#include <stdio.h>
#define MYCONST = 10

int main(void)
{
	printf("hello!\n");

	int number1 = 1;
	printf("나이 : %d\n번호: %d\n ", number1, 30);

	printf("안녕하셈");
	printf("나는 홍길동이삼");


	int number2 = 2;
	printf("%d\n", number2);

	int num = 10;
	printf("%d\n", sizeof(num));

	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(double));

	char ch1 = 'A';
	// char 문자를 저장하는 자료형
	printf("문자 : %c, 숫자 : %d\n", ch1, ch1);
	// printf : 해당 함수는 화면에 문자열과 변수를 출력한다.
	// %c : 변수를 문자로 출력한다.
	// %d: 변수를 정수로 출력한다. 

	char ch2 = 65;
	printf("문자 : %c, 숫자 : %d\n", ch2, ch2);
	//ch2가 %c  부분엔 A로 타나타고
	// %d 부분엔 65로 나타날것 !

	char ch3 = 'C';  //char 형 변수
	int num3 = 'C';       // int 형 변수

	printf("문자: %c, ASCII: %d (char)\n", ch3, ch3);
	// 'A', 65
	// %c : 변수를 문자로 출력한다. 
	// %d: 변수를 정수로 출력한다.
	printf("문자: %c, ASCII: %d (int)\n", num3, num3);
	// 'A', 65

	//const int MYCONST = 55;
	const int YOURCONST;

	double changeNumber = 10;
	printf("%f\n", changeNumber);

	int changeNumber2 = 5.4321;
	printf("%d\n", changeNumber2);


	short changeNumber3 = 200;
	printf("%d\n", changeNumber3);

	printf("%d\n", (int)1.234);


	printf("\n=========문제 시작==========");
	printf("\n");

	printf("\n 오늘의 주제 : 변수와 자료형");
	printf("\n 프로그램 작성자 : 홍길동");
	printf("\n 프로그램 작성일 : 2025.01.02");
	printf("\n");
	printf("\n");

	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(float));
	// 교과서 35p 참고 or 작성해서 교과서랑 비교해보기

	//몇바이트 나올까?
	printf("%d\n", sizeof(50));
	printf("%d\n", sizeof(3.14));



	return 0;
	return 0;
}






