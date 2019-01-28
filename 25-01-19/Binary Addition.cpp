//LIT2018038
#include <stdio.h>
#include <string.h>

char* addBinary(char *s1, char *s2) {
    int n = strlen(s1);
    int m = strlen(s2);
    char *s = (char*)malloc(n + 1);
    int carry = 0;
    unsigned int i = 0;
    for (;i < m; i++) {
        int a = s1[n- 1 - i] - '0';
        int b = s2[m - 1 - i] - '0';
        s[n - i] = (char)((a ^ b ^ carry) + '0');
        carry = (a & b) | (a & carry) | (b & carry); 
    }
    for (;i < n; i++) {
        int a = s1[n - 1 - i] - '0';
        s[n - i] = (char)((a ^ carry) + '0');
        carry = a & carry;
    }
    if (!carry) s++;
    else s[0] = '1';
    return s;
}

int main()
{
    int t;
    char s1[101];
    char s2[101];
    scanf("%d", &t);
    while(t--) {
        scanf("%s %s", s1, s2);
        if (strlen(s1) > strlen(s2))
            printf("%s\n", addBinary(s1, s2));
        else printf("%s\n", addBinary(s2, s1));
    }
}
