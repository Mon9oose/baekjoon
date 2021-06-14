// https://www.acmicpc.net/problem/2588

#include <cstdio>

int pow(int a, int b)
{
    int result = 1;
    
    for(int i = 0 ; i < b ; i++)
    {
        result = result * a;
    }

    return result;
}

int main(void)
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    
    // 385 = 3, 8, 5
    int result = 0;
    for(int i = 0 ; i < 3 ; i++)
    {
        int tmpResult = a * (b % 10);
        printf("%d\n", tmpResult);
        b /= 10;
        result += tmpResult * pow(10, i);
    }

    printf("%d\n", result);
    return 0;
}