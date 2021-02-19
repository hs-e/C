#include <stdio.h>

int main(void)
{
    int num1, num2, num3;
    int result1, result2, result3, final;  // result 하나로 가능

    printf("세 개의 정수를 입력해주세요. \n");
    scanf("%d %d %d", &num1, &num2, &num3);

    result1 = num1 - num2;  // X
    result2 = num2 + num3;  // X
    result3 = num3 % num1;  // X
    final = result1 * result2 * result3;  // result = (num1 - num2) * (num2 + num3) * (num3 % num1)

    printf("(%d - %d) X (%d + %d) X (%d ÷ %d의 나머지) = %d 입니다. \n", num1, num2, num2, num3, num3, num1, final);
    return 0;
}