#include <stdio.h>
#include <stdlib.h>

int main()
{
    int e,s, f, m, a,total;
    double avg;
    printf("enter grade:");
    scanf("%d\n%d\n%d\n%d\n%d",&e,&s,&f,&m,&a);

    total=e+s+f+m+a;
    printf("Total marks: %d\n",total);

    avg=total/5;
    printf("AVERAGE: %lf",avg);

    return 0;
}