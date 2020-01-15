#include <stdio.h>

int main(int argc, char *argv[])
{
  int i = 0;

  if (argc == 1) {
    printf("You only had one argument, oh well...\n");
  } else if (argc > 1 && argc < 4) {
    printf("Here\'s your arguments:\n");

    for (i=0; i < argc; i++) {
      printf("%s\n", argv[i]);
    }
    printf("\n");
  } else {
    printf("You have too many arguments. Ewww\n");
  }
  return 0;
}
