#include <stdio.h>
#define MYCONST = 10

int main(void)
{
	printf("hello!\n");

	int number1 = 1;
	printf("���� : %d\n��ȣ: %d\n ", number1, 30);

	printf("�ȳ��ϼ�");
	printf("���� ȫ�浿�̻�");


	int number2 = 2;
	printf("%d\n", number2);

	int num = 10;
	printf("%d\n", sizeof(num));

	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(double));

	char ch1 = 'A';
	// char ���ڸ� �����ϴ� �ڷ���
	printf("���� : %c, ���� : %d\n", ch1, ch1);
	// printf : �ش� �Լ��� ȭ�鿡 ���ڿ��� ������ ����Ѵ�.
	// %c : ������ ���ڷ� ����Ѵ�.
	// %d: ������ ������ ����Ѵ�. 

	char ch2 = 65;
	printf("���� : %c, ���� : %d\n", ch2, ch2);
	//ch2�� %c  �κп� A�� Ÿ��Ÿ��
	// %d �κп� 65�� ��Ÿ���� !

	char ch3 = 'C';  //char �� ����
	int num3 = 'C';       // int �� ����

	printf("����: %c, ASCII: %d (char)\n", ch3, ch3);
	// 'A', 65
	// %c : ������ ���ڷ� ����Ѵ�. 
	// %d: ������ ������ ����Ѵ�.
	printf("����: %c, ASCII: %d (int)\n", num3, num3);
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


	printf("\n=========���� ����==========");
	printf("\n");

	printf("\n ������ ���� : ������ �ڷ���");
	printf("\n ���α׷� �ۼ��� : ȫ�浿");
	printf("\n ���α׷� �ۼ��� : 2025.01.02");
	printf("\n");
	printf("\n");

	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(float));
	// ������ 35p ���� or �ۼ��ؼ� �������� ���غ���

	//�����Ʈ ���ñ�?
	printf("%d\n", sizeof(50));
	printf("%d\n", sizeof(3.14));



	return 0;
	return 0;
}






