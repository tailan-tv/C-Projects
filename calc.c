#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
    
	float num1, num2, result;
	char operator;

    printf("Digite o cálculo: ");
    fflush(stdin);
    scanf("%f %c %f", &num1, &operator, &num2);

    if (operator == '+'){
        result = num1 + num2;
    }
    else if (operator == '-'){
        result = num1 - num2;
    }
    else if (operator == '/'){
        result = num1 / num2;
    }
    else if (operator == '*'){
        result = num1 * num2;
    }
    printf("O resultado e: %.2f",result);

return 0;
}
