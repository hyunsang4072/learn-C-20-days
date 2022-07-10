#include <stdio.h>

//--- ���� ������ ---
// %c : Character; �ϳ��� ����
// %s : String; ���ڿ�
// %d : Decimal; 10���� ����
// %f : Float; �Ǽ�; Option���� .n(n=integer)�� f�տ� �ٿ� �Ҽ� ���ڸ����� ����Ұ��� ���Ҽ� �ִ�.
// %o : Octal; 8���� ����
// %x : Hexadecimal; 16���� ����
// %p : Pointer; �ּ�
// %u : Unsigned; ��ȣ�� ���� 10���� ����
// %% : �ۼ�Ʈ ���


//--- C���� �����͸� ǥ���ϴ� ��� ---
// ����(Character): ' '(���� ����ǥ)�� �����ش�.
//   i.e. 'A'
// ���ڿ�(String): " "(ū ����ǥ)�� �����ش�.
//   i.e. "Apple"
// ����(int): ���� �״�� �ۼ��Ѵ�.
//   i.e. 10
// �Ǽ�(double, float): ���� �ڿ� �Ҽ������� �ۼ��Ѵ�.
//   i.e. 10.0
//   i.e. %.2f -> �Ҽ��� 2��° �ڸ����� ���

// Debugging Tip!
// If you want to show a result of your code on console after debugging
// You may or may not have to change settings on debug
// Debug -> General -> uncheck the checkbox on "Close console after debugging is done."(or something similar to that)
// ����� -> �Ϲ� -> "������� �����Ǹ� �ڵ����� �ܼ� �ݱ�" ��üũ ���ֱ�

int main()
{
	printf("Hello, C\n");

	printf("Hello, %c\n", 'C');
	printf("Hello, %s\n", "C language");
	printf("%d\n", 10);
	printf("%.3f\n", 10.000);

	return 0;

}