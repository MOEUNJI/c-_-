#include <stdio.c>
main(void) {
	printf("============��øif��=========== \n");

	/*
	if(���ǽ�1){
		if(���ǽ�2){
			���ǽ� 1�� 2�� ��� ������ ��� �ڵ� ����;
		}
	}
	*/

	int studentNum = 241125, studentNumCheck;
	int password = 112233, passwordCheck;

	printf("�й��� �Է����ּ��� : ");
	scanf_s("%d", &studentNumCheck);

	printf("��й�ȣ�� �Է����ּ��� :");
	scanf_s("%d", &passwordCheck);

	if (studentNum == studentNumCheck) {
		if (password == passwordCheck) {
			printf("%d �� �α��� �Ǿ����ϴ�.", studentNumCheck);
			// ���̵�� ��й�ȣ�� ��� ��ġ�� ���
		}
		else {
			printf("��й�ȣ�� ��ġ���� �ʽ��ϴ�.");
			// ���̵�� �°� ��й�ȣ�� Ʋ�����
		}
	}
	else {
		printf("���̵� ��ġ���� �ʽ��ϴ�.");
		// ���̵� ��ġ���� �������
	}
	return 0;
}