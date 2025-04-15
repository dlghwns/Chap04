/* 파일명: ProAss5.c

 * 내용: Programming Assignment. 반지름과 높이를 정수로 입력받아 원기둥의 부피를 구하는 프로그램을 작성하시오.
 *							     이때 파이는 3.141592라고 하자.
 * 작성자: 이호준

 * 날짜: 2025.4. 8

 * 버전: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


 /*
 * 함수명 : solve()
 * 기능(책임) : 반지름과 높이의 길이를 입력받고 부피를 계산함.
 *				반지름의 길이와 높이의 값이 음수일 수 없으므로
 *				반지름 && 높이 의 값이 0 초과인지 확인를 한다.
 * 반환 : 두 수의 값이 모두 양수이면 0을 반환,
 *		  두 수중 하나라도 음수이면 1을 반환한다.
 */
int solve()
{
	const double PI = 3.141592;
	int r, h = 0;

	printf("반지름의 길이? ");
	scanf("%d", &r);
	printf("높이? ");
	scanf("%d", &h);

	if (r && h > 0)
	{
		printf("부피 : %.6f\n", PI * r * r * h);
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