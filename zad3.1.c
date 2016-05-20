#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void uwaga()
{printf("Podano zla liczbe argumentow, prosze podac 6  argumentow. \n");
}
void uwaga1(int a)
{printf("%d argument  nie jest liczba calkowita, prosze wprowadzic SAME liczby calkowite. \n",a);
}

int main(int argc, char **argv) {

  char s;
  int j,i,n,x,a,b,c,d,e,f;


  if(argc != 7)
 {uwaga();
  return 0;
 }

 n = argc;
 char *A[n];
 int z[n];

for(j = 1; j < n; j++)
{
   A[j] = argv[j];
   x = strlen(A[j]);
   for(i = 0; i < x; i++)
  {
    s = A[j][i];
    if( (i != 0 || s != '-' || x < 2) &&  (s > 57 || s < 48) )
    { uwaga1(j);
      return 0;
    }
  }
 z[j] = atoi(A[j]);
}

a = z[1];
b = z[2];
c = z[3];
d = z[4];
e = z[5];
f = z[6];
if((a >= b && b >= c && c >= d && d >= e && e >= f) || ( a <= b && b <= c && c <= d && d <= e && e <= f) || ( a == b && b == c && c == d && d == e && e == f))
printf("1");
else
printf("0");

  return 0;
  }

