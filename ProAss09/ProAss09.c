/* 파일명: ProAss9.c

 * 내용: Programming Assignment. 동영상의 재생시간을 초 단위로 입력받아 몇 시간 몇 분 몇 초인지 출력하는 프로그램을 작성하시오
 * 작성자: 이호준

 * 날짜: 2025.4. 8

 * 버전: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


 /*
 * 함수명 : cal()
 * 기능(책임) : solve함수에서 입력받은 전체 재생시간을 시간, 분, 초로 변환하여 출력한다.
 * 반환 : 없음
 */
void cal(int s)
{
	int remain_h = s / 3600;
	int remain_m = (s % 3600) / 60;
	int remain_s = s % 60;

	printf("재생시간은 %d시간 %d분 %d초입니다.", remain_h, remain_m, remain_s);
}


/*
* 함수명 : solve()
* 기능(책임) : 재생시간을 int형으로 입력받아 cal()함수를 호출한다.
* 반환 : 없음
*/
void solve()
{
	int s = 0;
	printf("재생시간(초)? ");
	scanf("%d", &s);
	cal(s);
}

int main()
{
	solve();
	return 0;
}