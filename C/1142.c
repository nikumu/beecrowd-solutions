#include <stdio.h>

int main(){
    
    int h = 0, i, j = 0, k = 0, n;
    
    scanf("%d", &n);
    
    for(i = 0; i < n; i++){
        
        h = h + 1;
        
        j = j + 2;
        
        k = k + 3;
        
        printf("%d %d %d PUM\n", h, j, k);
        
        h = h + 3;
        j = j + 2;
        k = k + 1;

    }

    return 0;
}
