#include <stdio.h>

int main(){
    int a, b, n;
    scanf("%d\n", &n);
    
    for(int i=0; i<n;i++){
        scanf("%d %d", &a, &b);
        printf("%d\n", a + b);
    }
    return 0;
}