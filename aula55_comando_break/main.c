#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for (i =1; i <= 20; ++i){
        if ( i % 3 ==0 && i % 9 ==0){
                printf("%i, divisivel por 3 e 9 \n", i);
                break; //QUEBRA O FOR//
        } else{
            printf("%i, nao e\n", i);
        }
    }

    getchar ();
    return 0;
}
