#include<stdio.h>
int main(void){    
    int x;  
    while(scanf(" %d", &x)==1){       
    printf("%d minutos\n",(60*x)/30);}    
    return 0;
}
