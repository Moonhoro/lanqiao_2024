#include <stdio.h>
int main()
{
    int a, b, c, count = 0;
    while (scanf("%d%d%d", &a, &b, &c) && (b != 0 || c != 0 || a != 0))
    {
        count++;
        printf("Case%d:%.*f\n", count, c, (double)a / b);
    }
    return 0;
}