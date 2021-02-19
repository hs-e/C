#include <stdio.h>

int main(void)
{
    int num1, num2;
    int result1, result2;

    printf("두 개의 정수를 입력하세요.");
    scanf("%d %d", &num1, &num2);

    result1 = num1 / num2;
    result2 = num1 % num2;

    printf("%d 나누기 %d 의 몫은 %d, 나머지는 %d 입니다. \n", num1, num2, result1, result2);
    return 0;
}