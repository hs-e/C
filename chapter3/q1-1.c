#include <stdio.h>

int main(void)
{
    int num1, num2;   
    int result1, result2;  // 굳이 result를 쓸 필요 없다.(쓸데없이 변수 늘리지 말기)

    printf("두 개의 정수 입력 : ");
    scanf("%d %d", &num1, &num2);

    result1 = num1 - num2;
    result2 = num1 * num2;

    printf("%d - %d = %d \n", num1, num2, result1);  // num1, num2, num1 - num2
    printf("%d X %d = %d \n", num1, num2, result2);  // num1, num2, num1 * num2 >>result 없이 이렇게 쓰면 됨
    return 0;
}

    /*
    int num1, num2, num3;
    int result;
    printf("세 개의 정수 입력 : ");
    scanf("%d %d %d", &num1, &num2, &num3);
    result = num1 * num2 + num3;
    printf("%d x %d + %d = %d \n", num1, num2, num3, result);
    return 0;
    */
