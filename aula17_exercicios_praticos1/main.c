#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;
    printf(" DIGITE DOIS NUMEROS INTEIROS:\n");
    scanf ("%d %d", &num1, &num2);

    if (num2 == 0)
        printf ("DIVISAO POR ZERO NAO PERMITIDA!");

    else {
        if (num1 % num2 == 0)
            printf ("%d  E  NUMERO E DIVISIVEL por %d\n", num1, num2);
        else
            printf ("%d NUMERO  NAO E DIVISIVEL por %d\n", num1, num2);
    }

    return 0;
}
