#include <stdio.h>
#include <string.h>

int main() {
  for (int i = 1; i <= 100; i++) {
    char out[30] = "";

    if (i % 3 == 0) {
      strcat(out, "Fizz");
    }

    if (i % 5 == 0) {
      strcat(out, "Buzz");
    }

    if (strcmp(out, "") == 0) {
      printf("%d", i);
    } else {
      printf("%s", out);
    }

    printf("\n");
  }
  return 0;
}