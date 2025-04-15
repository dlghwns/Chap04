/* 파일명: ProAss17.c

 * 내용: Programming Assignment. 32비트 크기의 데이터(부호 없는 정수형)에는 0~31번 비트가 존재한다.
 *								7번째 비트만 1인값, 15번째 비트만 1인 값, 23번째 비트만 1인값, 31번째 비트만 1인값을
 *								구해서 16진수와 10진수로 출력하는 프로그램을 작성하시오.
 * 작성자: 이호준

 * 날짜: 2025.4. 8

 * 버전: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


 /*
 * 함수명 : solve()
 * 기능(책임) : 7, 15, 23, 31번째 비트만 1로 쉬프트 시켜 16진수와 10진수로 출력해준다.
 *
 * 반환 : 없음
 */
int solve()
{
    unsigned int b7 = 1U << 7;
    unsigned int b15 = 1U << 15;
    unsigned int b23 = 1U << 23;
    unsigned int b31 = 1U << 31;

    printf("7번째 비트만 1인 값:  16진수 = %08X, 10진수 = %u\n", b7, b7);
    printf("15번째 비트만 1인 값: 16진수 = %08X, 10진수 = %u\n", b15, b15);
    printf("23번째 비트만 1인 값: 16진수 = %08X, 10진수 = %u\n", b23, b23);
    printf("31번째 비트만 1인 값: 16진수 = %X, 10진수 = %u\n", b31, b31);

    return 0;

}


int main()
{
    solve();
    return 0;
}