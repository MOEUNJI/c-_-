#include <stdio.h>

main(void) {

    printf("===============break��===============\n");

    /*
        - for�� break����
        for(�ʱⰪ; ���ǽ�; ������){
            break; // �ݺ����� ������ �����Ѵ�.
            �ڹٽ�ũ��Ʈ �ڵ�;
        }

        - while�� break����
        let ���� = �ʱⰪ;
        while(���ǽ�){
            break; //�ݺ����� ������ ����
            ������ �ڵ�;
            ������;
        }

    */
    printf("===============for break��===============\n");
    int breakFor;
    for (breakFor = 0; breakFor <= 10; breakFor++) {
        if (breakFor == 6) {
            break;
        }
        printf("%d \n", breakFor);
    }
