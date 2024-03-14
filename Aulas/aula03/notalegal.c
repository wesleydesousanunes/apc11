#include <stdio.h>

int main() {
  printf("\x1b[31m------------------\n");
  printf("    NOTA LEGAL    \n");
  printf("------------------\x1b[0m\n");
  printf("ITEM            QTD VALOR\n");
  printf("Banana nanica    1  15.00\n");
  printf("Maca fuji       10  50.00\n");
  printf("Uva globo        5  26.00\n");
  printf("----------------         \n");
  printf("TOTAL...:        1  91.00\n");

return 0;  
}