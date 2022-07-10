#include <stdio.h>

//--- 서식 지정자 ---
// %c : Character; 하나의 문자
// %s : String; 문자열
// %d : Decimal; 10진수 정수
// %f : Float; 실수; Option으로 .n(n=integer)를 f앞에 붙여 소수 몇자리까지 출력할건지 정할수 있다.
// %o : Octal; 8진수 정수
// %x : Hexadecimal; 16진수 정수
// %p : Pointer; 주소
// %u : Unsigned; 부호가 없는 10진수 정수
// %% : 퍼센트 출력


//--- C언어에서 데이터를 표기하는 방법 ---
// 문자(Character): ' '(작은 따옴표)로 감싸준다.
//   i.e. 'A'
// 문자열(String): " "(큰 따옴표)로 감싸준다.
//   i.e. "Apple"
// 정수(int): 숫자 그대로 작성한다.
//   i.e. 10
// 실수(double, float): 숫자 뒤에 소수점까지 작성한다.
//   i.e. 10.0
//   i.e. %.2f -> 소수점 2번째 자리까지 출력


//--- 제어 문자 ---
// \" : " "(큰 따옴표) 출력
// \' : ' '(큰 따옴표) 출력

// Debugging Tip!
// If you want to show a result of your code on console after debugging
// You may or may not have to change settings on debug
// Debug -> General -> uncheck the checkbox on "Close console after debugging is done."(or something similar to that)
// 디버그 -> 일반 -> "디버깅이 중지되면 자동으로 콘솔 닫기" 언체크 해주기

int main()
{
	printf("Hello, C\n");

	printf("Hello, %c\n", 'C');
	printf("Hello, %s\n", "C language");
	printf("%d\n", 10);
	printf("%.3f\n", 10.000);

	printf("%c and %c\n", 'A', 'B');
	// 서식문자를 여러개 사용하기 위해서는 ,(comma)로 나눠주면 된다.
	// Tip: 서식문자와 각각의 해당하는 파트들의 갯수는 동일해야만 한다.

	// ASCII Code
	// - a 7-bit character set containing 128 characters. It contains the numbers from 0-9, the upper and lower case English letters from A to Z, and some special characters
	printf("%d and %d\n", 'A', 'B');
	// 서식문자 %d를 사용하고 Character를 파트로 잡아주면 ASCII 코드 값이 정수로 출력된다.

	printf("%d %d\n", 10, 20);
	// 서식문자 정렬
	// 서식 지정자에서 오른쪽 정렬: %와 d사이에 확보할 공간의 개수를 작성한다.
	//   i.e. %3d -> 3개의 공간을 확보하고 해당 공간에서 오른쪽 정렬
	// 서식 지정자에서 왼쪽 정렬: %와 d사이에 확보할 공간의 개수를 작성한다.
	//   i.e. %-3d -> 3개의 공간을 확보하고 해당 공간에서 왼쪽 정렬
	printf("%5d %d\n", 10, 20);
	printf("%-5d %d\n", 10, 20);

	// 서식 지정자에서 오른쪽 정렬 후 남은 공간을 0으로 채우는 방법
	// - %와 d사이에 확보할 공간의 개수를 작성하고 그 앞에 0을 붙여준다.
	//   i.e. %03d -> 3개의 공간을 확보하고 해당 공간에서 오른쪽 정렬 진행 후 남은 공간에 0을 채워준다
	//		  %03d 10 -> 010
	printf("%05d %03d\n", 10, 20);
	// 00010 030 출력

	printf("%%c\n"); // %c 퍼센트 그대로 출력

	// " "(큰 따옴표)나 ' '(작은 따옴표는) 주의해서 써야한다.
	// 물론 사람이 보기에는 별로 문제가 없을수도 있지만
	// 컴퓨터는 다르게 받아들이기 때문이다.
	//   i.e. ""Hello"" -> Error
	//   i.e. "\"Hello\"" -> "Hello" 출력
	printf("\"Hello\"\n");

	return 0;

}