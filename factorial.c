#include <stdio.h>

int main(){
    int n, fact, i;
    fact=1;
    
    scanf("%d", &n);

    for (i=1; i<=n; i++){
        fact=fact*i;
    }
    printf("factorial: %d\n", fact);
    
    return 0;
}