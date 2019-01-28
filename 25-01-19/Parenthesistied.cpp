//LIT2018038
#include <stdio.h>
#include <stdlib.h>

typedef struct Stack {
    char arr[100000];
    int top;
} Stack;

void push(Stack *s, char c) {
    s->arr[s->top] = c;
    s->top++;
}

int isEmpty(Stack *s) {
    return (s->top == 0);
}

void pop(Stack *s) {
    s->top--;
}

int main()
{
    char c;
    Stack *s = (Stack *)malloc(sizeof(Stack));
    s->top = 0;
    while((c = getchar()) != EOF) {
        if (c == '(') {
            push(s, c);
        } else if (c == ')') {
            if (isEmpty(s)) {
                printf("no");
                return 0;
            }
            pop(s);
        } else break;
    }
    if (isEmpty(s)) {
        printf("yes");
    } else {
        printf("no");
    }
}
