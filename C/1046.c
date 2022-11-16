#include <stdio.h>

int main(){
    
    int tempo = 24, dia1 = 0, dia2 = 0, aux = 0;
    
    scanf("%d %d", &dia1, &dia2);
    
    if(dia1 == dia2){
        
        printf("O JOGO DUROU %d HORA(S)\n", tempo);
    }
    
    else if(dia1 > dia2){
        
        tempo = tempo - dia1 + dia2;
        
        printf("O JOGO DUROU %d HORA(S)\n", tempo);
    }
    
    else{
        
        tempo = dia2 - dia1;
        
        printf("O JOGO DUROU %d HORA(S)\n", tempo);
    }

    return 0;
}
