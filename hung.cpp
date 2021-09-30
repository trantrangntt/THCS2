#include <stdio.h>
void input(double &a, double &b, double &c)
{
    printf("Enter a = ");
    scanf("%lf", &a);
    printf("Enter b =");
    scanf("%lf", &b);
    printf("Enter c =");
    scanf("%lf", &c);
}
void swap(double &a, double &b)
{
    double index;
    index = a;
    a = b;
    b = index;
}
void thinh(double a, double b, double c)
{
    if (a > c)
        swap(a, c);
    if (a > b)
        swap(a, b);
    if (b > c)
        swap(b, c);
    printf("Min = %2lf", a);
    printf("\nMax = %2lf", c);
    printf("\nArr = %2lf%2lf%2lf", a, b, c);
}
int main()
{
    double a, b, c;
    input(a, b, c);
    thinh(a, b, c);
    return 0;
}