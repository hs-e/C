#include <stdio.h>

int main(void)
{
    int num = 3;    // 00000000 00000000 00000000 00000011
    int result = num << 3;    //3=11 8=1000 4=100 24=11000

    printf("3 X 8 / 4 = %d \n", result >> 2);
    return 0;
}

/*
int num = 3;  > result를 따로 안두고 num에 두 번 덮어씌워도 된다.
num = num << 3; // 8의 곱
num = num >> 2; // 4의 제
printf("%d \n", num)
*/