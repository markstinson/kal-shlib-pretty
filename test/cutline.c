#include <stdio.h>
#include <stdlib.h>

void print_usage() {
  printf("usage: cutline SIZE\n");
}

int main(int argc, char** argv) {

  int nb;
  int c, nc = 0;

  if (argc != 2) {
    print_usage();
    return(1);
  };

  nb = atoi(argv[1]);

  while ( (c = getchar()) != EOF && ++nc <= nb) {
    putchar(c);
  };

  if (0 == setenv("XXX1","hello",1)) {
    printf("success");
  };
  if (0 == putenv("XXX2=hello2")) {
    printf("success");
  };
  return(1);
}
