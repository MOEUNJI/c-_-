#include <stdio.h>
main(void) {

	printf("==============시프트연산자==============\n");

	int bitFive = 5;     // 0101
	int bitThree = 3;  // 0011

	printf("bitFive << 1 = %d\n", bitFive << 1);
	// 5(10진수) 00000101이었던 것이 왼쪽으로 1칸 이동 00001010이 됨
	// 00001010 = 이렇게 하면 10진수로 계산해보면 2배인 10이 됨
	printf("bitFive << 2 = %d\n", bitFive << 2); // 왼쪽으로 2칸 이동: 00010100 = 5의 4배인 20
	printf("bitFive << 3 = %d\n", bitFive << 3); // 왼쪽으로 3칸 이동: 00101000 = 5의 8배인 40
	printf("bitFive << 4 = %d\n", bitFive << 4); // 왼쪽으로 4칸 이동: 01010000 = 5의 16배인 80

	int bitTwenty = 20; // 20 = 00010100 (2진수)
	printf("bitTwenty >> 1 = %d\n", bitTwenty >> 1); // 오른쪽으로 1칸 이동: 00001010 = 10
	printf("bitTwenty >> 2 = %d\n", bitTwenty >> 2); // 오른쪽으로 2칸 이동: 00000101 = 5

	return 0;
}