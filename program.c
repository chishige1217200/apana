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
  y = 1.0 / x;

  return y;
}

void trape(int part)
{
  int i;
  double h;
  double x;
  double y_l;
  double y_r;
  double S[20];
  double ans = 0;

  h = fabs((b - a)/part); /*小区間の幅を計算*/
  x = a;

  for(i = 0; i < part; i++)
    {
      y_l = f(x);
      y_r = f(x + h);
      S[i] = ((y_l + y_r) *h) / 2.0;
      x = x + h;
    }

  for(i = 0; i < part; i++) ans = ans + S[i];

  printf("\nTrapezoidal Answer:%f\n", ans);
  printf("The difference    :%f\n", fabs(ans - t_value));
}

/*void simp(int part)
{
  int i;
  double h;
  }*/

int main(void)
{
  int mode = 0;
  int part = 2;

  fprintf(stderr, "Please select integral rule. (1:Trapezoidal rule 2:Simpson's rule)\n");
  scanf("%d", &mode);

  fprintf(stderr, "Please input number of partitions.\n");
  scanf("%d", &part);

  if(mode == 1) trape(part);
  if(mode == 2) /*simp(part)*/;

  return 0;
}
