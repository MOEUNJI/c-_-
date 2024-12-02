#include <stdio.h>
main(void) {
	printf("===============포인터 문제 ===============\n");

	char hello[] = "hi";
	char* helloAddress;
	helloAddress = &hello;
	printf("%s : %p \n", helloAddress, helloAddress);
	return 0;
}