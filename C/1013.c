#include<stdio.h>
int main()
{
    int a, b, c;
    while(scanf(" %d %d %d", &a, &b, &c)==3)
    {
        if(a>b)
            if(a>c)
                printf("%i eh o maior\n", a);
            else
                printf("%i eh o maior\n", c);
        else if(b>c)
            printf("%i eh o maior\n", b);
        else printf("%i eh o maior\n", c);
    }
    return 0;
}
