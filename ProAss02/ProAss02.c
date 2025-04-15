/* 파일명: ProAss2.c

 * 내용: Programming Assignment. 화씨온도(F)를 실수로 입력받아 섭씨 온도로 변환해서 출력하는 프로그램을 작성하시오.
 *								화씨온도를 섭씨온도로 변환하는 공식은 다음과 같다.
 * 작성자: 이호준

 * 날짜: 2025.4. 8

 * 버전: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

 /*
 * 함수명 : double()
 * 기능(책임) : 섭씨온도를 구하는 공식에 계산해줌
 * 반환 : 계산한 result값.
 */
double cal(double a)
{
	double result = (a - 32) * (5.0 / 9.0);
	return result;
}


/*
* 함수명 : solve()
* 기능(책임) : 화씨온도를 입력받고 cal함수를 출력함.
* 반환 : 없음
*/
void solve()
{
	float c = 0;
	printf("화씨온도?");
	scanf("%f", &c);

	printf("%.2f F = %.2lf C", c, cal(c));
}


int main()
{
	solve();
	return 0;
}