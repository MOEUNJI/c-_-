#include <stdio.h>
main(void) {

	printf("==============��������==============\n");
	// �ǿ����ڶ�? ������ ������
	// ���׿����ڶ�? �ǿ����ڰ� �ʿ� ���� �ϳ��� ������ ������ �� �ִ� ������
	 // ||(or) �����ڴ� �ǿ������� ���� �ϳ��� true��� true��� ������� ��ȯ�Ѵ�.
	// &&(and) �����ڴ� �ǿ������� ���� �ϳ��� false�� �����Ѵٸ� false�� ������� ��ȯ�Ѵ�(��� ���̾����).
	// !(not) �����ڴ� ���׿����ڷ� ���� true�̸� �ݴ�� false�� ��ȯ�Ѵ�.

	int one = 10, two = 20, three = 30, four = 40;
	int result;

	result = one > two || two >= three || three > four;
	// one(10) > two(20) ? false
	// two(20) >= three(30) ? false
	// three(30) > four(40) ? false
	// �� ������� false(0) ���� ���ð���
	printf("result : %d\n", result);

	result = one <= two && two >= three && three <= four;
	// one(10) <= two(20) ? true
	// two(20) >= three(30) ? false
	// three(30) <= four(40) ? true
	// �ǿ������� �Ѱ��� false�� ���ԵǾ� ������ felse(0)�� ��ȯ�Ѵ�. ( ��� true������)
	printf("result : %d\n", result);

	result = one <= two && two <= three && three <= four;
	// one(10) <= two(20) ? true
	// two(20) <= three(30) ? true
	// three(30) <= four(40) ? true
		// �� ������� false�� �������� ������ true(1)�� ��ȯ�Ѵ�
	printf("result : %d\n", result);

	result = !(one > two);
	// one(10) > two(20) one�� two���� ũ��? �� ���� ���� false�ε� 
	// !�� ����Ͽ� ���������� ����� ���� �ݴ� ���� ����Ұ��� �� true�� ����Ұ�
	return 0;
}