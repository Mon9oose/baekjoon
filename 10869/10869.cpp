// https://www.acmicpc.net/problem/10869

#include <cstdio>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n%d\n%d\n%d\n%d\n", a + b, a - b, a * b, a / b, a % b);
    return 0;
}