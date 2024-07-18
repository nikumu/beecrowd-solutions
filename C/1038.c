#include <stdio.h>
int main(void){
    int codigo,quantidade;
    double TOTAL;
    scanf("%d %d", &codigo,&quantidade);
      if (codigo==1) {
        TOTAL = 4.00*quantidade;
        printf("Total: R$ %.2lf\n", TOTAL);
    } else if (codigo==2) {
        TOTAL = 4.50*quantidade;
        printf("Total: R$ %.2lf\n", TOTAL);
    } else if (codigo==3) {
        TOTAL = 5.00*quantidade;
        printf("Total: R$ %.2lf\n", TOTAL);
    } else if (codigo==4) {
        TOTAL = 2.00*quantidade;
        printf("Total: R$ %.2lf\n", TOTAL);
    } else if (codigo==5) {
        TOTAL = 1.50*quantidade;
        printf("Total: R$ %.2lf\n", TOTAL);
    }
    return 0;
}
