#include <stdio.h>

int main(void)
{
    int num1 = 10;  // 컴퓨터에서는 0이 아니면 다 참, 따라서 num3 = T(1) >> !num3 = F(0)
    int num2 = 12;
    int num3 = 59;
    int result1, result2, result3;

    result1 = (num1 == 10 && num2 == 12);
    result2 = (num1 < 12 || num2 > 12);
    result3 = (!num3);

    printf("result1 : %d \n", result1);
    printf("result2 : %d \n", result2);
    printf("result3 : %d \n", result3);
    return 0;
}