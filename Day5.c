#include<stdio.h>

int main()
{
    int a=2, b=3, c=4, d=4, e=5, f=3;
    double numeritor = c * (a-b);
    double dedident  = f * (d+e);

    printf("sol = %.5lf\n", numeritor / dedident );
}
