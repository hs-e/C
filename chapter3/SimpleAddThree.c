#include <stdio.h>

int main(void)
{
    int result1, result2;
    int num1, num2, num3, num4;

    printf("정수 one: ");
    scanf("%d", &num1);   // 첫 번째 정수 입력
    printf("정수 two: ");
    scanf("%d", &num2);   // 두 번째 정수 입력

    result1 = num1 + num2;
    printf("%d + %d = %d \n", num1, num2, result1);


    printf("정수 두 개를 입력하시오.(예>a,b)");
    scanf("%d,%d", &num3, &num4);

    result2 = num3 + num4;
    printf("%d + %d = %d \n", num3, num4, result2);
    return 0;
}