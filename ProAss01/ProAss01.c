/* 파일명: ProAss1.c

 * 내용: Programming Assignment. 질량과 속력을 실수로 입력받아 운동 에너지를 구하는 프로그램을 작성하시오.
 *								질량은 kg단위, 속력은 m/s단위로 입력받는다.
 * 작성자: 이호준

 * 날짜: 2025.4. 8

 * 버전: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

 //운동에너지 = 0.5 * 질량 * 속력^2


/*
* 함수명 : getMotionEnergy()
* 기능(책임) : 질량과 속력을 입력받아 운동에너지를 계산하여 반환
* 입력 : 질량(kg), 속력(m/s)
* 반환 : 운동에너지
*/
double getMotionEnergy(double mass, double speed)
{
	double energy = 0.5 * mass * speed * speed;
	return energy;
}


/*
* 함수명 : assignment0401()
* 기능(책임) : 질량과 속력을 입력받아 운동에너지를 구하는 함수
* 반환 : 정수이며 0이면 성공, 그 외의 값은 에러이다.
*/
int assignment0401(void)
{
	double mass, speed = 0.0;

	printf("질량(kg)? ");
	scanf("%lf", &mass);

	printf("속력(m/s)");
	scanf("%lf", &speed);

	printf("운동에너지 : %.2f J", getMotionEnergy(mass, speed));
}


int main()
{
	assignment0401();
	return 0;
}