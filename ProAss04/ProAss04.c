/* 파일명: ProAss4.c

 * 내용: Programming Assignment. 용매의 질량과 용질의 질량을 정수로 입력받아 용액의 퍼센트 농도를 구하는 프로그램을 작성하시오.
 *								용매의 질량와 용질의 질량은 g단위로 입력받는다.
 * 작성자: 이호준

 * 날짜: 2025.4. 8

 * 버전: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

 /*
 * 함수명 : solve()
 * 기능(책임) : 용매와 용질을 입력받아 농도를 계산함.
 *				단 농도가 음수일 수 없으므로
 *				용매 && 용질의 값이 0초과인지 확인함.
 *
 * 반환 : 두 수의 값이 모두 양수이면 0을 반환,
 *		  두 수중 하나라도 음수이면 1을 반환한다.
 */
int solve()
{
	float mae, jil = 0;

	printf("용매(g)? ");
	scanf("%f", &mae);

	printf("용질(g)? ");
	scanf("%f", &jil);

	if (jil && mae > 0)
	{
		printf("농도 : %.2f %%\n", (jil / (mae + jil)) * 100);
		return 0;
	}
	else
	{
		return 1;
	}
}

int main()
{
	int result = solve();
	if (result == 0)
	{
		return 0;
	}
	else
	{
		printf("비정상종료.");
		return 1;
	}
}