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

	return 0;

}