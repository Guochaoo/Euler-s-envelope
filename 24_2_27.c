// 欧拉的信封_全错排
#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    int D[n];
    D[0] = 1;
    D[1] = 0;
    D[2] = 1;
    for (int i = 3; i <= n; i++)
    {
        D[i] = (i - 1) * (D[i - 1] + D[i - 2]);
    }
    printf("%d", D[n]);
    return 0;
}
