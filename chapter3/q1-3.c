#include <stdio.h>

int main(void)
{
    int num, result;
    
    printf("제곱할 숫자 한 개를 입력하세요.");
    scanf("%d", &num);

    result = num * num;

    printf("%d 의 제곱은 %d 입니다. \n", num, result);
    return 0;
}
