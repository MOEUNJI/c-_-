#include <stdio.h>
main(void) {
	printf("===============������ ���� ===============\n");

	char hello[] = "hi";
	char* helloAddress;
	helloAddress = &hello;
	printf("%s : %p \n", helloAddress, helloAddress);
	return 0;
}