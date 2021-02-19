#include <stdio.h>

int main(void)
{
    int num1, num2, num3;
    int result1, result2;  // 굳이 result2를 쓸 필요 없다.(쓸데없이 변수 남발 금지)

    printf("세 개의 정수 입력 : ");
    scanf("%d %d %d", &num1, &num2, &num3);

    result1 = num1 * num2;
    result2 = result1 + num3;  // 안써도 되는 부분

    printf("%d X %d + %d = %d \n", num1, num2, num3, result2);  // num1, num2, num3, result1
    return 0;
}