#include <stdio.h>

int main()
{
    float numero_1,numero_2;
    char operator;
    printf("Ingrese el primer identificador: ");
    scanf("%f" ,&numero_1);
    printf("Ingrese un operador +, -, *, /: ");
    scanf("%c" ,&operator);
    printf("Ingrese el segundo identificador: ");
    scanf("%f" ,&numero_2);
    switch(operator)
    {
        case '+':
            printf("numero1+numero2=%.2f\n" ,numero_1+numero_2);
            break;
        case '-':
            printf("numero1-numero2=%.2f\n" ,numero_1-numero_2);
            break;
        case '*':
            printf("numero1*numero2=%.2f\n" ,numero_1*numero_2);
            break;
        case '/':
            printf("numero1/numero2=%.2f\n" ,numero_1/numero_2);
            break;
    }       
    return 0;
}
