#include <stdio.h>
int main() {
	int five=5, ten=10,fifteen=15,twenty=20;
  double inch=0.393701;

	printf("\r%2dcm = %.6f inch\n",five,five*inch);
  printf("%dcm = %.6f inch\n",ten,ten*inch);
  printf("%dcm = %.6f inch\n",fifteen,fifteen*inch);
  printf("%dcm = %.6f inch\n",twenty,twenty*inch);

	return 0;
}
