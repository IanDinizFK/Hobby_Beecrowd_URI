#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define N 10001
#define MAX 9999.99999

typedef struct s_point
{
    double x, y;
} point;

double distance(point p1, point p2);
double closest(int a, int b);
int cmp(const void *a, const void *b);
double max(double a, double b) { return a > b ? a : b; }
double min(double a, double b) { return a < b ? a : b; }

point p[N];

int main(void)
{
    int n, i;
    double d;

    while (scanf("%d", &n) && n)
    {
        for (i = 0; i < n; i++)
            scanf("%lf %lf", &p[i].x, &p[i].y);

        qsort(p, n, sizeof(point), cmp);

        d = closest(0, n - 1);
        if (d > MAX)
            printf("INFINITY\n");
        else
            printf("%.4lf\n", d);
    }

    return 0;
}

double distance(point p1, point p2)
{
    double d1 = (p1.x - p2.x), d2 = (p1.y - p2.y);
    double d = sqrt(d1 * d1 + d2 * d2);
    return min(d, MAX + 1.0);
}

double closest(int a, int b)
{
    int i, j, k;
    double d1, d2, d, xp;
    if (a == b)
        return MAX + 1.0;
    else if (b - a == 1)
        return distance(p[b], p[a]);
    else
    {
        d1 = closest(a, (a + b) / 2);
        d2 = closest((a + b) / 2 + 1, b);
        d = min(d1, d2);
        j = (a + b) / 2;
        xp = p[j].x;
        do
        {
            k = (a + b) / 2 + 1;
            while (xp - p[k].x < d && k <= b)
            {
                d1 = distance(p[k], p[j]);
                d = min(d, d1);
                k++;
            }
            j--;
        } while (xp - p[j].x < d && j >= a);
        return d;
    }
}

int cmp(const void *a, const void *b)
{
    point *p1 = (point *)a, *p2 = (point *)b;
    if (p1->x > p2->x)
        return 1;
    if (p1->x < p2->x)
        return -1;
    return p1->y > p2->y ? 1 : -1;
}
