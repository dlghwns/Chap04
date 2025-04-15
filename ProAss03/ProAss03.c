/* 파일명: ProAss3.c

 * 내용: Programming Assignment. 질량과 부피를 실수로 입력받아 밀도를 구하는 프로그램을 작성하시오.
 *								부피는 cm^3단위로 입력받는다.
 * 작성자: 이호준

 * 날짜: 2025.4. 8

 * 버전: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


 /*
 * 함수명 : solve()
 * 기능(책임) : 질량과 부피를 입력받아 계산을 해준다

 * 반환 : 두 수의 값이 모두 양수이면 0을 반환,
 *		  두 수중 하나라도 음수이면 1을 반환한다.
 */
int solve()
{
	float g, cm3 = 0;

	printf("질량(g)? ");
	scanf("%f", &g);
	printf("부피(cm^3)? ");
	scanf("%f", &cm3);

	if (g && cm3 > 0)
	{
		printf("밀도 : %f\n", g / cm3);
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