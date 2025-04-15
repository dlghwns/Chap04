/* 파일명: ProAss7.c

 * 내용: Programming Assignment. 직각 삼각형에서 직각을 낀 두 변 a, b의 길이를 입력받아 빗변의 길이를 구하는 프로그램을 작성하시오
 * 작성자: 이호준

 * 날짜: 2025.4. 8

 * 버전: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


 /*
 * 함수명 : solve()
 * 기능(책임) : 밑변과 높이의 길이를 받아 빗변의 길이를 구해주는 함수이다.
 *
 * 반환 : 길이는 음수가 될 수 없으므로 두 수가 양수인지 판단한다
 *		  두 수가 양수이면 0을 반환하고
 *		  두 수 중에 하나라도 음수값이라면 1을 반환한다.
 */
int solve()
{
	//밑변=a, 높이 =b
	int a, b = 0;
	printf("밑변?");
	scanf("%d", &a);

	printf("높이?");
	scanf("%d", &b);


	if (a && b > 0)
	{
		printf("빗변의 길이: %f", (float)sqrt((a * a) + (b * b)));
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