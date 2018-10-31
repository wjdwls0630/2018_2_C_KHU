#include "stdio.h"

int main(void) {
  short x =1 ;
  int y=2;
  long z =3;



  printf("short의 크기 : %d 바이트\n",sizeof x ); //sizeof 표현식
  printf("int의 크기 : %d 바이트\n",sizeof (y) ); //sizeof (표현식)
  printf("long의 크기 : %d 바이트\n",sizeof (z) );
  printf("short의 크기 : %d 바이트\n",sizeof (short) );// sizeof(자료형)
  printf("int의 크기 : %d 바이트\n",sizeof (int) );
  printf("long의 크기 : %d 바이트\n",sizeof (long) );
  printf("float의 크기 : %d 바이트\n",sizeof (float) );
  printf("double의 크기 : %d 바이트\n",sizeof (double) );
  printf("long double의 크기 : %d 바이트\n",sizeof (long double) );
  printf("unsigned의 크기 : %d 바이트\n",sizeof (unsigned) );
  printf("char의 크기 : %d 바이트\n",sizeof (char) );




  return 0;
}

//자료형 크기
////구름 IDE - 자료형 크기
