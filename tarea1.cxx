#include <stdio.h>

int main ( )
{  
        float res;
        int x=3;
        float A=0.5 * x;
        float B=((3+x)/2.0);
        float C=(2*(x*x));
        float D=(2+3)*x;
        res=(A+B*C)/D;
        printf("Res=%f", res);
        return 0;
}