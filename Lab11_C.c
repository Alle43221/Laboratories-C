#include <stdio.h>
#define PERIMETER(x,y) ((x)*2+(y)*2)

#define LEAP_YEAR(x) ((x)%4==0 && (x)%100 ? 1: 0)

#define GALLON 3.78541
#define LITERS_TO_GALLONS(x) ((x)/GALLON)

#define MAX_OF_THREE(x,y,z) ((x)>=(y) && (x)>=(z) ?(x):((y)>=(x) && (y)>=(z) ?(y):(z)))

#define FACTORIAL(n, limit) while(limit>0) \
{                                      \
n=n*limit;\
limit--; \
}

#define SUM(n, a, i) while(i<=n) \
{     \
a[0]+=(float)1.0/a[i];        \
i++;                 \
}

#define HARMONIC_MEAN(n, a) ((n)/a[0])


int main() {
    int per1=PERIMETER(2, 3);
    printf("%d\n", per1);
    per1=PERIMETER(2 + 1, 3);
    printf("%d\n", per1);

    int leap_year=LEAP_YEAR(2020);
    printf("%d\n", leap_year);
    leap_year=LEAP_YEAR(2000);
    printf("%d\n", leap_year);

    float volume= LITERS_TO_GALLONS(37);
    printf("%f\n", volume);
    volume=LITERS_TO_GALLONS(3.78541);
    printf("%f\n", volume);

    int max= MAX_OF_THREE(1, 2, 3);
    printf("%d\n", max);
    max= MAX_OF_THREE(1, 1, 1);
    printf("%d\n", max);
    max= MAX_OF_THREE(1, 1, 2);
    printf("%d\n", max);

    int aux=6, fact= 1;
    FACTORIAL(fact, aux);
    printf("%d\n", fact);

    float val[]={0, 1, 4, 4};
    int val_n=3, i=1;
    SUM(val_n, val, i);
    float rez= HARMONIC_MEAN(val_n, val);
    printf("%f", rez);

    return 0;
}
