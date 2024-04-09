#include <stdio.h>

int main() {
    int fn, sn;
    char op;

    printf("first num: ");
    scanf("%d", &fn);

    printf("second num: ");
    scanf("%d", &sn);

    printf("operator: ");
    scanf(" %c", &op);

    if (op == '+')
        printf("%d", fn + sn);
    else if (op == '*')
        printf("%d", fn * sn);
    else
        printf("Invalid Operator");

    return 0;
}