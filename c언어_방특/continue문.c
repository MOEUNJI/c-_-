#include <stdio.h>
main(void) {
    printf("===============continue��===============\n");

    /*
        for(�ʱⰪ; ���ǽ�; ������){
        continue;
        ������ �ڵ�;
    }
===================================
        let ���� = �ʱⰪ;

        while(���ǽ�){
            ������;
            continue;
            ������ �ڵ�
        }

        //continue�� ����
        //continue�� �ݺ����� ���� �ݺ��� �ߴ��ϰ� ���� �ݺ����� �ٷ� �Ѿ�ϴ�.
        //��, continue �Ʒ��� �ڵ�� ������� �ʽ��ϴ�.
        */

    int continueNum;
    for (continueNum = 0; continueNum <= 10; continueNum++) {
        if (continueNum % 2 == 0) { // continueNum�� ¦������ Ȯ��
            continue; // ¦���� �Ʒ� �ڵ带 �ǳʶٰ� ���� �ݺ����� �Ѿ
        }
        printf("%d \n", continueNum);
    }
	return 0;
}