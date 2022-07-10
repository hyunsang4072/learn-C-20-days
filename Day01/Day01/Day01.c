#include <stdio.h>	// stdio.h 헤더파일을 포함시켜주는 코드
					// include 포함시키다
					// .h : 헤더파일

int main()	// 메인 메소드 : 주된 코드의 영역을 알려주는 코드
{

	/*printf("Hello C!");	// printf : " " 안에 작성된 문자열을 출력해주는 함수
	printf("Alert!\a");*/

	printf("Hello \nC!\n");	// Hello; C!
	printf("Hello \tC!\n");	// Hello	C!
	printf("Hello \rC!\n");	// C!llo		//이게 Console에서는 우리가 평소 사용하던 메모장같은 앱과는 달리 앞으로가서 다시 쓰면 원래있던 글자가 뒤로 밀리는게 아니라 원래있던 글자 위에 같이 쓰이는걸로 된다.
	printf("Hello \bC!\n"); // HelloC!


	printf("웃음: (*^o^*)\n");
	printf("사랑: ((하트).(하트))\n");
	printf("슬픔: (ㅠ_ㅠ)\n");
	printf("화남: (-_-^)\n");

	printf("이름: 홍길동\n");
	printf("나이: 30\n");
	printf("주소: 서울특별시 종로구 묘동 단성사\n");
	printf("키: 183.2cm\t몸무게: 70.53kg\n");

	return 0;	// 값을 반환(return)해주는 코드
}