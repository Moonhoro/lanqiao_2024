#include <stdio.h>

int main()
{
    for (int abc = 123; abc <= 329; abc++)
    {
        int def = abc * 2;
        int ghi = abc * 3;

        int digits[10] = {0};                        // 数字的使用情况，0表示未使用
        int temp = abc * 1000000 + def * 1000 + ghi; // 将abc、def、ghi合并成一个数

        // 检查是否使用了相同的数字
        int flag = 1;
        while (temp > 0)
        {
            int digit = temp % 10;
            if (digits[digit] || digit == 0)
            {
                flag = 0; // 如果数字已经被使用或者是0，不符合条件
                break;
            }
            digits[digit] = 1;
            temp /= 10;
        }

        if (flag)
        {
            printf("%d %d %d\n", abc, def, ghi);
        }
    }

    return 0;
}
