//LIT2018038
#include <stdio.h>

int main()
{
    int t, n, k;
    scanf("%d", &t);
    while(t--) {
        scanf("%d", &n);
        int arr[n + 1];
        for (int i = 1; i <= n; i++) {
            scanf("%d", arr + i);
        }
        scanf("%d", &k);
        int b = 1;
        for (int i = 1; i <= n; i++) {
            for (int j = i; j <= n; j++) {
                if (arr[i] + arr[j] == k) {
                    printf("%d %d\n", i, j);
                    b = 0;
                    break;
                }
            }
            if (!b) break;
        }
        if (b) printf("-1\n");
    }
}
