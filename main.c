#include <stdio.h>

int sum(int, int);

int main() {
    int a, b;
    printf("a =");
    scanf("%d", &a);
    printf("b =");
    scanf("%d", &b);
    printf("%d + %d = %d\n", a, b, sum(a, b));
    return 0;
}

int sum(int a, int b){
    return a + b;
}
