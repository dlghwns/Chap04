/* 파일명: ProAss16.c

 * 내용: Programming Assignment. 컴퓨터 시스템에서 색상을 표현하는 방법 중에 RGB 표기법은 red, green, blue에 8비트씩을 사용해서 색상을 표현하므로 24비트 트루컬러라고 한다.
								 컴퓨터 시스템에서는 32비트 데이터의 최 하위 바이트부터 red, green, blue의 순서로 색상 정보를 저장하고 최상위 바이트는 사용하지 않고 0으로 채운다.
								 0~255사이의 값을 red, green, blue의 순서로 3개 입력받아서 RGB 색 상을 만들어서 출력하는 프로그램을 작성하시오.
								 RGB 색상을 출력할 때는 바이트 단위로 알아보기 쉽도록 16진수로 출력한다.
 * 작성자: 이호준

 * 날짜: 2025.4. 8

 * 버전: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


 /*
 * 함수명 : solve()
 * 기능(책임) : red, green, blue 값을 받아 256이상이면 0으로 세팅해주고 16진수로 출력해준다.
 *
 * 반환 : 없음
 */
int solve()
{
	int red = 0, green = 0, blue = 0;
	printf("red");
	scanf("%d", &red);
	printf("green");
	scanf("%d", &green);
	printf("blue");
	scanf("%d", &blue);

	red = (red < 256) ? red : 0;
	green = (green < 256) ? green : 0;
	blue = (blue < 256) ? blue : 0;

	// b g r 순서
	printf("RGB 트루컬러 : %02x%02X%02X", blue, green, red);

}


int main()
{
	solve();
	return 0;
}