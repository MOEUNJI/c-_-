#include <stdio.h>
main(void) {
    printf("===============while continue�� ����===============\n");
    int whileConNum = 0; // �ʱ�ȭ

    while (whileConNum <= 10) {// 0���� 10���� �ݺ�
        whileConNum++;// ���� ���� ����
        if (whileConNum % 2 != 0) { // Ȧ�����
            continue; // �Ʒ� �ڵ带 �ǳʶٰ� ���� �ݺ����� �Ѿ��.
        }
        printf("%d \n", whileConNum);// ¦���� ��µȴ� 
    }
	return 0;
}