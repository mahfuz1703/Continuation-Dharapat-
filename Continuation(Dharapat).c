#include <stdio.h>

int main(){
    int n, i;
    printf("Enter value of n: ");
    scanf("%d", &n);

    /*while(i<=10){
        printf("%d * %d = %d\n", n, i, n*i);
        i = i + 1;
    }*/

    for(i=1; i<=10; i++){
        printf("%d * %d = %d\n", n, i, n*i);
    }

    return 0;
}
