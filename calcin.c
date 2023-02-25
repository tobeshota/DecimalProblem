/* 【calcde.cのつづき】小数点数は整数に置き換えると正確な計算ができる */
#include <stdio.h>

int main(void)
{
    float sum = 0.0;
    int i = 100;

    // 小数点数0.1を整数1に置き換えて100回加える
    while (i--)
        sum += (0.1 * 10);

    // あとしまつ
    sum /= 10;

    // 結果を表示する
    printf("0.1 × 100 = %f\n", sum);

    return 0;
}