//LIT2018038
#include <stdio.h>
#include <string.h>

int palindrome(char *str, int n) {
    for (int i = 0; i < n / 2; i++) {
        if (str[i] != str[n - i - 1]) return 0;
    }
    return 1;
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        char s[100];
        scanf("%s", s);
        if (palindrome(s, strlen(s))) printf("Yes\n");
        else printf("No\n");
    }
}
