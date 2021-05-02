#include <stdio.h>

/* Na Fibonacciho sekvence jsem si vzpomel z nasich hodin matematiky s reditelem skoly, pri kterych jsme meli moznost si povidat o ruznostech matematiky a jejich funci 
  
  Fibonacciho sekvence je posloupnost cisel, kde je kazde dalsi cislo souctem 2 predchozich, ay na vyjimku prvnich dvou cisel, ktera jsou 0 a 1 */

int n, prvni_c = 0, druhe_c = 1, dalsi_c, c;

int main(){
  printf("Zadejte pocet terminu: ");
  scanf("%d", &n);
  printf("\n");
  printf("Prvnich %d terminu Fibonacciho sekvence jsou:\n", n);

  for (c = 0; c < n; c++){
    if (c <= 1)
    dalsi_c = c;
    else{
      prvni_c = druhe_c;
      druhe_c = dalsi_c;
      dalsi_c = prvni_c + druhe_c;
    }
    printf("%d ", dalsi_c);
  }
  return 0;
}