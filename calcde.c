/* 【結論】コンピュータは少数点数の計算を間違える ── 0.1を100回加えても10にならない */
#include <stdio.h>

int main(void)
{
    float sum = 0.0;
    int i = 100;

    // 少数点数0.1を100回加える
    while (i--)
        sum += 0.1;

    // 結果を表示する
    printf("0.1 × 100 = %f\n", sum);

    return 0;
}