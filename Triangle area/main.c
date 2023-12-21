#include <stdio.h>
#include <stdlib.h>



double area(double x,double y)
{
 double S=x*y;
 return S;

}
int main()
{
double S;
int a=4;
int b=7;
S=area(a,b);
   printf("%lf",S);
    return 0;
}
