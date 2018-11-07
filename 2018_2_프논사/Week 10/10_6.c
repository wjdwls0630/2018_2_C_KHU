#include <stdio.h>

int main() {
  for (int i = 1; i <= 100; i++) {
    printf("%d ",i );
    if (i>=5) {
      break;
    }
  }

  printf("\nfor문을 빠져나왔습니다.\n" );
  return 0;
}
