#include <stdio.h>
int main(void)
{
    int num1 = 15;  // 00000000 00000000 00000000 00001111
    int num2 = 20;  // 00000000 00000000 00000000 00010100
    int num3 = num1 & num2;  // num1과 num2의 비트단위 & 연산
    int num4 = num1 | num2;  
    int num5 = num1 ^ num2;
    int num6 = ~num1;

    printf("AND 연산의 결과 : %d \n", num3);
    printf("OR 연산의 결과 : %d \n", num4);
    printf("XOR 연산의 결과 : %d \n", num5);
    printf("NOT 연산의 결과 : %d \n", num6);
    return 0;
}

/*
& 연산자 : 비트 단위 AND
    0 & 0 : 0을 반환
    0 & 1 : 0을 반환
    1 & 0 : 0을 반환
    1 & 1 : 1을 반환

| 연산자 : 비트 단위 OR
    0 | 0 : 0을 반환
    0 | 1 : 1을 반환
    1 | 0 : 1을 반환
    1 | 1 : 1을 반환

^ 연산자 : 비트 단위 XOR
    0 ^ 0 : 0을 반환
    0 ^ 1 : 1을 반환
    1 ^ 0 : 1을 반환
    1 ^ 1 : 0을 반환

~ 연산자 : 비트 단위 NOT >> MSB도 반전되어 부호마저 바뀜
    ~ 0 : 1을 반환
    ~ 1 : 0을 반환
*/
