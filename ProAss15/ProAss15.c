/* 파일명: ProAss15.c

 * 내용: Programming Assignment. 우리가 알고 있는 환율은 매매기준율이다. 실제 달러를 구입할 때는 매매기준율에 은행의 환전수수료를 더해서 환율이 결정된다.
								 환전수수료는 환전우대율에 따라 달라진다. 환전수수료율은 은행마 다 미리 정해지며, 환전우대율은 고객마다 다르게 책정된다.
								환전수수료율은 1.75%로 정해져 있 다고 가정하고 원-달러 매매기준율과 환전우대율(%)를 입력받아 달러를 살 때 적용되는 환율을 걸 정하고,
								구입하고자 하는 달러가 얼마인지 입력받아서 몇 원에 해당하는지 출력하는 프로그램을 작성하시오.
 * 작성자: 이호준

 * 날짜: 2025.4. 8

 * 버전: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



 /*
 * 함수명 : solve()
 * 기능(책임) : 달러를 살 때 적용되는 환율을 구해준다.
 * 반환 : 없음
 */
void solve()
{

	double maemae = 0.0;
	printf("원/달러 매매기준율? ");
	scanf("%lf", &maemae);

	double udae = 0.0;
	printf("환전우대율(%)? ");
	scanf("%lf", &udae);

	double result1 = maemae + (maemae * 0.0175 * (1 - udae / 100));
	printf("달러 살 때 환율은 %f입니다.\n", result1);

	double dallar = 0.0;
	printf("구입할 달러(USD)?");
	scanf("%lf", &dallar);
	double result2 = dallar * result1;
	printf("USD %f 살 때 ==> KRW %.2f", dallar, result2);

}

int main()
{
	solve();
	return 0;
}