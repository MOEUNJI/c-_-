#include <stdio.h>
main(void) {
	printf("===============���ڿ� ���� ǥ��===============\n");

	char stringText[] = "�ȳ��ϼ���!";
	printf("���ڿ� ���� �迭 stringText �� ���̴� : %d \n", sizeof(stringText));
	// sizeof ��? �迭 ��ü�� �޸� ũ�⸦ ��ȯ�Ѵ�. 

	char englishText[] = "hello!";
	printf("�迭 englishText �� ���̴� : %d \n", sizeof(englishText));

	char longText[50] = "This is long";
	// �迭�� ��ü ũ��
	printf("�迭 longText�� ��ü ũ��: %d \n", sizeof(longText)); // 50
	// ���ڿ��� ���� ����
	printf("�迭 longText�� ����� ���ڿ��� ����: %d \n", strlen(longText)); // 11
	printf("%s \n", longText);

	char question[30] = "My name is ������";
	printf("%s \n", question);

	question[10] = '\0';
	printf("%s \n", question);

	printf("===============scanf_s�� ���� ���ڿ� �Է�===============\n");

	char scanfString[50]; // �迭�� ũ�⸦ ������
	printf("���ڿ��� �Է��ϼ��� : ");
	scanf_s("%s", scanfString, sizeof(scanfString));
	// scanf_s�� ���ڿ��� ���� ���� �޾ƿ� ���� ���� ���� �տ� & �����ڸ� ������� �ʴ´�!!!!
	// scanf�� �޸� scanf_s�� ���ڿ��� �޾ƿ����� sizeof�� �޾ƿ� ������ �迭������ Ȯ���ؾ���
	printf("�Էµ� ���ڿ� : %s \n", scanfString);

	return 0;
}