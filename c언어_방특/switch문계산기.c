#include <stdio.h>
main(void) {
    printf("===========switch�� ���� �ǽ�============== \n");

    char operator;
    int num1, num2;

    printf("�����ڸ� �Է��ϼ��� (+, -, *, /): ");
    scanf_s(" %c", &operator, 1); // '1'�� ���� ũ�⸦ ���� (�ʼ�)

    printf("�� ���ڸ� �Է��ϼ���: ");
    scanf_s("%d %d", &num1, &num2); // ���� �Է��� �״�� ���

    switch (operator) {
    case '+':
        printf("%d + %d = %d\n", num1, num2, num1 + num2);
        break;
    case '-':
        printf("%d - %d = %d\n", num1, num2, num1 - num2);
        break;
    case '*':
        printf("%d * %d = %d\n", num1, num2, num1 * num2);
        break;
    case '/':
        if (num2 != 0) {
            printf("%d / %d = %d\n", num1, num2, num1 / num2);
        }
        else {
            printf("0���� ���� �� �����ϴ�.\n");
        }
        break;
    default:
        printf("��ȿ���� ���� �������Դϴ�.\n");
    }
	return 0;
}