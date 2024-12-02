#include <stdio.h>

// 사용자에게 이름을 입력받아서 안녕하세요 **님 이라고 인사하는 프로그램
void f_class(char* name) {
	// void : 반환값이 없는 함수를 생성
	// f_class : 함수 이름
	// char * name : 매개변수로 문자열을 가리키는 포인터를 뜻한다. 이름을 받아서 함수에서
	// 사용하도록 전달하는 역할을 한다.
	// main에서 생성할name배열의 첫번째 인덱스의 주소가 될것
	printf("안녕하세요, %s 님 \n", name);
	// name : main 함수 안에서 전달될 사용자의 이름을 담을 공간
}

int main(void) {
	// 이 프로그램의 시작점 (컴퓨터는 항상 main 함수부터 실행한다)
	char name[20];
	// 이름을 저장할 문자 배열을 만드는 부분
	printf("이름을 입력해주세요 : ");
	scanf_s("%s", name, sizeof(name));
	// 사용자가 입력한 이름을 name배열에 저장
	// 입력값의 크기를 지정해 주어야 해서 sizeof사용함
	f_class(name);

	// 실행 흐름
	// 사용자가 이름을 입력하면 그 값이 name배열에 저장되어서 name의 주소는 fclass의
	// 매개변수이니 값이 name에 값이 들어오면 char*name 에는 name[0] 의 주소를 가지게 됨
	// 그 주소를 가지고 출력하면 됨

	printf("깃허브 연동 실험");
	return 0;
}