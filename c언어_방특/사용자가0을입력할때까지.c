#include <stdio.h>
main(void) {

    printf("===========�ݺ��� : ����ڰ� 0�� �Է��Ҷ����� ���============== \n");

    int num;

    printf("���ڸ� �Է��ϼ��� (0�� �Է��ϸ� ����): ");
    scanf_s("%d", &num);

    while (num != 0) { // �Է°��� 0�� �ƴϸ� �ݺ�
        printf("�Է��� ����: %d\n", num);
        printf("�ٽ� �Է��ϼ��� (0�� �Է��ϸ� ����): ");
        scanf_s("%d", &num);
    }

    printf("���α׷��� �����մϴ�.\n");
	return 0;
}