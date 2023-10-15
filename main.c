#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b, c;
    float x1, x2;

    printf("Enter your coefficients: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Roots of the equation: ");

    switch (a)
        {
        case 1: printf("x^2"); break;
        case 0: break;
        case -1: printf("-x^2"); break;
        default: printf("%dx^2", a);
    }

    if (a != 0 && b > 0) printf("+");

    switch (b)
        {
        case 1: printf("x"); break;
        case 0: break;
        case -1: printf("-x"); break;
        default: printf("%dx", b);
    }

    if (b!=0 && c>0) printf("+");

    if ((a!=0 || b!=0) && c !=0) printf("%d", c);

    printf("=0\n");

    float sq = b*b-4*a*c;

    if (a == 0)
    {
        if (b != 0)
            printf("The answer is %.2f\n", -(float)c / b);
        else printf("No solutions\n");
    }
    else
        {
        if (sq == 0)
        {
            x1 = -b / (2.0 * a);
            printf("x=%.2f\n", x1);
    }
        else if (sq < 0)
            {
            printf("No solutions\n");
        }
        else
            {
            x1 = (-b + sqrt(sq)) / (2.0 * a);
            x2 = (-b - sqrt(sq)) / (2.0 * a);
            printf("x1=%.2f, x2=%.2f\n", x1, x2);
        }
    }

    return 0;
}
