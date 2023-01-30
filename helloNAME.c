#include <stdio.h>

int main(void) {
  char a[99];
  printf("write your name!\n");
  scanf("%s", &a);
  printf("hello %s!", a);
  return 0;
}