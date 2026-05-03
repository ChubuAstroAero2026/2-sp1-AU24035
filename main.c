#include <stdio.h>

int main()
{ //ここにコードを書く
  float A;
  int B;
  scanf("%f", &A);
  scanf("%d", &B);
  printf("%.*f\n", B, A);
  
  return 0;
}
