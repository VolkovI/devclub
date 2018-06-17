#include <stdio.h>

int main() {
    int dividend, divisor;
    
    scanf("%d%d", &dividend, &divisor);
    if ( dividend % divisor == 0 && dividend != 0 ) {
        printf("%d\n", dividend);
    } else if ( divisor > 0 ) {
        dividend = dividend + divisor - (dividend % divisor);
        printf("%d\n", dividend);
    } else {
        dividend = dividend + divisor - (dividend % divisor) - divisor;
        printf("%d\n", dividend);
    }
    return 0;
}
