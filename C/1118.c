#include <stdio.h>

void validarNota(float nota){

  int i = 0;

  float media, aux;

  while(i < 2){
          
          scanf("%f", &nota);
          
          if((nota < 0) || (nota > 10)){
              
              printf("nota invalida\n");
              
          }
          
          else{
              
              i++;
              
              if(i == 1){
                  
                  aux = nota;
              }
              
              else{
                  
                  nota = nota;
              }
              
              
          }

      }
      
      media = ((aux + nota) / 2);
      
      printf("media = %.2f\n", media);

}

int main(){
    
    float nota;

    int verifica;

    validarNota(nota);

    printf("novo calculo (1-sim 2-nao)\n");

    while(1){
      
      scanf("%d", &verifica);

      if(verifica == 2){

        return 0;
      }
      else if(verifica == 1){

        validarNota(nota);
        printf("novo calculo (1-sim 2-nao)\n");
      }
      else{

        printf("novo calculo (1-sim 2-nao)\n");

      }

    }
    
    return 0;
}
