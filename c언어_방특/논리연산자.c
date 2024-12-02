#include <stdio.h>
main(void) {

	printf("==============논리연산자==============\n");
	// 피연산자란? 연산대상 데이터
	// 단항연산자란? 피연산자가 필요 없는 하나의 값으로 정의할 수 있는 연산자
	 // ||(or) 연산자는 피연산자중 값이 하나라도 true라면 true라는 결과값을 반환한다.
	// &&(and) 연산자는 피연산자중 값이 하나라도 false가 존재한다면 false로 결과값을 반환한다(모두 참이어야함).
	// !(not) 연산자는 단항연산자로 값이 true이면 반대로 false를 반환한다.

	int one = 10, two = 20, three = 30, four = 40;
	int result;

	result = one > two || two >= three || three > four;
	// one(10) > two(20) ? false
	// two(20) >= three(30) ? false
	// three(30) > four(40) ? false
	// 총 결과값은 false(0) 으로 나올것임
	printf("result : %d\n", result);

	result = one <= two && two >= three && three <= four;
	// one(10) <= two(20) ? true
	// two(20) >= three(30) ? false
	// three(30) <= four(40) ? true
	// 피연산자중 한개라도 false가 포함되어 있으면 felse(0)를 반환한다. ( 모두 true여야함)
	printf("result : %d\n", result);

	result = one <= two && two <= three && three <= four;
	// one(10) <= two(20) ? true
	// two(20) <= three(30) ? true
	// three(30) <= four(40) ? true
		// 총 결과값은 false가 존재하지 않으니 true(1)를 반환한다
	printf("result : %d\n", result);

	result = !(one > two);
	// one(10) > two(20) one가 two보다 크니? 에 대한 답은 false인데 
	// !를 사용하여 정의했으니 도출된 값의 반대 값을 출력할것임 즉 true를 출력할것
	return 0;
}