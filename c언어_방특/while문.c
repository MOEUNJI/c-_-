#include <stdio.h>
main(void) {

    printf("===========�ݺ��� : while��============== \n");

    /*
    �ڷ��� ������ = �ʱⰪ;
    while(����){
        �ݺ���Ű���� �ϴ� �ڵ� �ۼ�
        ������;
    }
    */

    int hi = 1;
    while (hi <= 10) {
        printf("�ȳ��ϼ��� %d \n", hi);
        hi++;
    }
	return 0;
}