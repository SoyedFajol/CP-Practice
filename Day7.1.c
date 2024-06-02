#include<stdio.h>
int main ()
{
    int i;
    long long l;
    float f;
    double d;
    char c;

    scanf("%d %lld %f %lf %c", &i, &l, &f, &d, &c);
    printf("%d %lld %f %lf %c", i, l, f, d, c);

}
