#include <stdio.h>
#include <stdlib.h>
int main() {
  size_t arr[1];
  for (int i = 0; i < 1; i++) {
    arr[i] = rand() % 999999999 + 5000000000;
  }
  for (int i = 0; i < 1; i++) {
    arr[i] = arr[i];
    printf("%ld\n", arr[i]);
  }
  int a1;
  int a2;
  int a3;
  int a4;
  int a5;
  int a6;
  int a7;
  int a8;
  int a9;
  int a10;
  a1 = (arr[0] % 10000000000) / 1000000000;
  a2 = (arr[0] % 1000000000) / 100000000;
  a3 = (arr[0] % 100000000) / 10000000;
  a4 = (arr[0] % 10000000) / 1000000;
  a5 = (arr[0] % 1000000) / 100000;
  a6 = (arr[0] % 100000) / 10000;
  a7 = (arr[0] % 10000) / 1000;
  a8 = (arr[0] % 1000) / 100;
  a9 = (arr[0] % 100) / 10;
  a10 = arr[0] % 10;
  printf("%d %d %d %d %d %d %d %d %d %d", a1, a2, a3, a4, a5, a6, a7, a8, a9,
         a10);
  int an[10];
  an[0] = a1;
  an[1] = a2;
  an[2] = a3;
  an[3] = a4;
  an[4] = a5;
  an[5] = a6;
  an[6] = a7;
  an[7] = a8;
  an[8] = a9;
  an[9] = a10;
  int variables[10];
  for (int i = 0; i < 10; i++) {
    variables[i] = an[i];
  }
  int max = variables[0];
  int min = variables[0];
  for (int i = 1; i < 10; i++) {
    if (variables[i] > max) {
      max = variables[i];
    } else if (variables[i] < min) {
      min = variables[i];
    }
  }
  printf("\nBase of %ld is %d with highest digit is %d",arr[0],max+1,max);

  return 0;
}