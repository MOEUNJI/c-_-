#include <stdio.h>
main(void) {

    printf("===========�ݺ��� : do while�� ============== \n");

    /*
    �ڷ��� ���� = �ʱ�ȭ;
    do{
        �����ų �ڵ�;
        ������;
    }while(���ǽ�);
    */

    int doWhile = 1;
    do {
        printf("do while�� %d �� �ǽ���! \n", doWhile);
        doWhile++;
    } while (doWhile >= 10);
	return 0;
}