#include <stdio.h>
#include <string.h>

int sp = 0;
int stack[10000];

void push(int n) {
    stack[sp++] = n;
}

int check(char ch) {
    int tmp =0, result = 0;
    if(ch == '(') {
        push(1);
    } else if(ch == '{') {
        push(2);
    } else if(ch == '[') {
        push(3);
    } else if(ch == ')') {
        tmp = stack[--p];
        if( tmp!= 1)
            result = 1;
    } else if(ch == '}') {
        tmp = stack[--p];
        if( tmp!= 2)
            result = 1;
    }  else if(ch == ']') {
        tmp = stack[--p];
        if( tmp!= 3)
            result = 1;
    }
    return result;
}

int main () {
    int c, i;
    char str[10000];
    scanf("%d", &c);
    int b;

    while(c--) {
        b=0;
        scanf("%s",str);
        for(i=0; i<strlen(str); i++) {
            if(check(str[i])) {
                b=1;
                break;
            }
        }

        if(b==0 && sp==0)
            printf("YES\n");
        else
        {
            printf("NO\n");
            p = 0;
        }
    }
    return 0;
}
