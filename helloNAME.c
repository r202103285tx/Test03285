#include <stdio.h>

int main(void) {
  int i;
  char a[99];
  printf("write your first name!\n");
  scanf("%s", &a);
  printf("hello %s!", a);
  return 0;
}