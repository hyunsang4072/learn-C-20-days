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


//--- ���� ���� ---
// \" : " "(ū ����ǥ) ���
// \' : ' '(ū ����ǥ) ���

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

	printf("%c and %c\n", 'A', 'B');
	// ���Ĺ��ڸ� ������ ����ϱ� ���ؼ��� ,(comma)�� �����ָ� �ȴ�.
	// Tip: ���Ĺ��ڿ� ������ �ش��ϴ� ��Ʈ���� ������ �����ؾ߸� �Ѵ�.

	// ASCII Code
	// - a 7-bit character set containing 128 characters. It contains the numbers from 0-9, the upper and lower case English letters from A to Z, and some special characters
	printf("%d and %d\n", 'A', 'B');
	// ���Ĺ��� %d�� ����ϰ� Character�� ��Ʈ�� ����ָ� ASCII �ڵ� ���� ������ ��µȴ�.

	printf("%d %d\n", 10, 20);
	// ���Ĺ��� ����
	// ���� �����ڿ��� ������ ����: %�� d���̿� Ȯ���� ������ ������ �ۼ��Ѵ�.
	//   i.e. %3d -> 3���� ������ Ȯ���ϰ� �ش� �������� ������ ����
	// ���� �����ڿ��� ���� ����: %�� d���̿� Ȯ���� ������ ������ �ۼ��Ѵ�.
	//   i.e. %-3d -> 3���� ������ Ȯ���ϰ� �ش� �������� ���� ����
	printf("%5d %d\n", 10, 20);
	printf("%-5d %d\n", 10, 20);

	// ���� �����ڿ��� ������ ���� �� ���� ������ 0���� ä��� ���
	// - %�� d���̿� Ȯ���� ������ ������ �ۼ��ϰ� �� �տ� 0�� �ٿ��ش�.
	//   i.e. %03d -> 3���� ������ Ȯ���ϰ� �ش� �������� ������ ���� ���� �� ���� ������ 0�� ä���ش�
	//		  %03d 10 -> 010
	printf("%05d %03d\n", 10, 20);
	// 00010 030 ���

	printf("%%c\n"); // %c �ۼ�Ʈ �״�� ���

	// " "(ū ����ǥ)�� ' '(���� ����ǥ��) �����ؼ� ����Ѵ�.
	// ���� ����� ���⿡�� ���� ������ �������� ������
	// ��ǻ�ʹ� �ٸ��� �޾Ƶ��̱� �����̴�.
	//   i.e. ""Hello"" -> Error
	//   i.e. "\"Hello\"" -> "Hello" ���
	printf("\"Hello\"\n");

	return 0;

}