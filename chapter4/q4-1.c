#include <stdio.h>

int main(void)
{
    int num;
    printf("숫자를 입력하세요. \n");
    scanf("%d", &num);

    num = ~num + 1;  // 1의 보수를 취하고 1을 더하는 과정 : 2의 보수법

    printf("부호를 바꾼 결과 : %d \n", num);
    return 0;
}