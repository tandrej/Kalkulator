#include <stdio.h>
#include <stdlib.h>

int main() {

    char operator;
    double prviBroj,drugiBroj;

    printf("Enter an operator (+, -, *,): ");
    scanf("%c", &operator);

    printf("Enter two operands: ");
    scanf("%lf %lf",&prviBroj, &drugiBroj);

    switch(operator)
    {
        case '+':
            printf("%.1lf + %.1lf = %.1lf",prviBroj, drugiBroj, prviBroj + drugiBroj);
            break;

        case '-':
            printf("%.1lf - %.1lf = %.1lf",prviBroj, drugiBroj, prviBroj - drugiBroj);
            break;

        case '*':
            printf("%.1lf * %.1lf = %.1lf",prviBroj, drugiBroj, prviBroj * drugiBroj);
            break;

        case '/':
            printf("%.1lf / %.1lf = %.1lf",prviBroj, drugiBroj, prviBroj / prviBroj);
            break;

        // operator doesn't match any case constant (+, -, *, /)
        default:
            printf("Error! Operacija nije moguća");
    }

    return 0;
}
