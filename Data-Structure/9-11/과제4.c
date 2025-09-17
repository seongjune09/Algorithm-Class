#include <stdio.h>
#include <math.h>

typedef struct
{
    int x, y;
} Point;

int main()
{
    Point p1, p2;
    scanf("%lf %lf", &p1.x, &p1.y);
    scanf("%lf %lf", &p2.x, &p2.y);

    int a = (p2.y - p1.y);
    int b = (p2.x - p1.x);

    double result = sqrt((a * a) + (b * b));

    printf("%.2f\n", result);
    return 0;
}