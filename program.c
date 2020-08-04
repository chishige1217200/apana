#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double a = 1;
double b = 2;
double t_value = 0.375;

double f(double x)
{
  double y;

  x = x * x * x;
  y = 1 / x;

  return y;
}

void trape(int part)
{
  int i;
  double h;
  double x;
  double y_l;
  double y_r;
  double S = 0;

  h = fabs((b - a) / part);
  x = a;

  for(i = 0; i < part; i++)
    {
      y_l = f(x);
      y_r = f(x + h);
      S = S + ((y_l + y_r) * h) / 2;
      x = x + h;
    }
  fprintf(stderr, "\n");
  printf("Trapezoidal Answer:%f\n", S);
  printf("The difference    :%f\n", fabs(S - t_value));
}

void simp(int part)
{
  int i;
  double h;
  double x;
  double y_l;
  double y_c;
  double y_r;
  double S = 0;

  h = fabs((b - a) / part);
  x = a;

  for(i = 0; x < b; i++)
    {
      y_l = f(x);
      y_c = f(x + h);
      y_r = f(x + 2 * h);
      S = S + h * (y_l + 4 * y_c + y_r) / 3;
      x = x + 2 * h;
    }
  fprintf(stderr, "\n");
  printf("Simpson's Answer:  %f\n", S);
  printf("The difference  :  %f\n", fabs(S - t_value));
}

int main(void)
{
  int mode = 0;
  int part = 2;

  fprintf(stderr, "Please select integral rule. (1:Trapezoidal rule 2:Simpson's rule)\n");
  scanf("%d", &mode);

  fprintf(stderr, "Please input number of partitions.\n");
  scanf("%d", &part);

  if(mode == 1) trape(part);
  if(mode == 2) simp(part);

  return 0;
}
