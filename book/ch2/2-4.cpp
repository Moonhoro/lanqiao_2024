#include <stdio.h>

int main()
{
    int n, m;
    double ans = 0;
    int cnt = 0;
    while (true)
    {
        scanf("%d %d", &n, &m);
        if (n == 0 && m == 0)
        {
            break;
        }
        if (n > m)
        {
            printf("错误\n");
        }
        cnt++;
        for (int i = n; i <= m; i++)
        {
            ans += 1.0 / i / i;
        }
        printf("Case %d:%.5lf\n", cnt, ans);
    }
}