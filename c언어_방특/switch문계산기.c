#include <stdio.h>
main(void) {
    printf("===========switch문 계산기 실습============== \n");

    char operator;
    int num1, num2;

    printf("연산자를 입력하세요 (+, -, *, /): ");
    scanf_s(" %c", &operator, 1); // '1'은 문자 크기를 지정 (필수)

    printf("두 숫자를 입력하세요: ");
    scanf_s("%d %d", &num1, &num2); // 정수 입력은 그대로 사용

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
            printf("0으로 나눌 수 없습니다.\n");
        }
        break;
    default:
        printf("유효하지 않은 연산자입니다.\n");
    }
	return 0;
}