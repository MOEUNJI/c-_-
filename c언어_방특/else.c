#include <stdio.h>
main(void) {
	
	printf("=================else===================== \n");
	/*
	if(���ǽ�) {
		������ ���� true��� �� �ڵ尡 �����
	} else {
		������ ���� false��� �� ���� �����
	}
	*/
	char alpha = 'A';
	if (alpha == 'B') {
		printf("alpha�� B�� �����ϴ�. \n");
	}
	else {
		printf("alpha�� B�� �ٸ��ϴ�. \n");
	}

	printf("=================����� �����ϴ� ���ڴ�?===================== \n");
	int likeNumber;
	printf("����� �����ϴ� ���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &likeNumber);

	if (likeNumber >= 10) {
		printf("����� �����ϴ� ���ڴ� 10 �̻��̱��� \n");
	}
	else {
		printf("����� �����ϴ� ���ڴ� 10 �̸��̱��� \n");
	}
	return 0;

}