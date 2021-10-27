#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
  long int npoints=100000000L;
  long int i, ngood=0L;
  long int seed;
  double x, y, pi;

  seed = time(NULL);
  srand48(seed);
  for (i=0; i<npoints; i++) {
    x = drand48();
    y = drand48();
    if (x*x+y*y <= 1.0) ngood++;
  }
  pi = 4.0*(double)ngood/(double)npoints;
  printf("%.16f\n", pi);
  return 0;
}

  
