#include <stdio.h>
int main (void) {
    int i, a, m, d;
    scanf ("%d", &i);
    a=i/365;
    m=(i-(a*365))/30;
    d=(i-(a*365)-(m*30));
    printf ("%d ano(s)\n", a);
    printf ("%d mes(es)\n", m);
    printf ("%d dia(s)\n", d);
    return 0;
}
