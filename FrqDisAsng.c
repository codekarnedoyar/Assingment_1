#include <stdio.h>
#include <stdlib.h>

int main() {
  int input;
  int i;
  int a, b, c, d;
  int a1 = 0;
  int a2 = 0;
  int a3 = 0;
  int a4 = 0;
  int a5 = 0;
  int a6 = 0;
  int a7 = 0;
  int a8 = 0;
  int a9 = 0;
  int a10 = 0;
  printf("Enter Size: ");
  scanf("%d", &input);
  int arr[input];
  printf("\n");
  for (int ind = 0; ind < input; ind++) {
    arr[ind] = rand() % 8999 + 1000;
    // printf("%d\t", arr[ind]);
  }
  for (i = 0; i < input; i++) {
    d = arr[i] % 10;
    c = (arr[i] % 100) / 10;
    b = (arr[i] % 1000) / 100;
    a = (arr[i] % 10000) / 1000;
    // d=input%10;
    // c=(input%100)/10;
    // b=(input%1000)/100;
    // a=(input%10000)/1000;
    // printf("%d %d %d %d", a, b, c, d);
    // printf("%d", arr[i]);
    if (a > b && a > c && a > d) {
      printf("%d Base %d\n", arr[i], a + 1);
      if ((a + 1) == 1) {
        a1++;
      } else if ((a + 1) == 2) {
        a2++;
      } else if ((a + 1) == 3) {
        a3++;
      } else if ((a + 1) == 4) {
        a4++;
      } else if ((a + 1) == 5) {
        a5++;
      } else if ((a + 1) == 6) {
        a6++;
      } else if ((a + 1) == 7) {
        a7++;
      } else if ((a + 1) == 8) {
        a8++;
      } else if ((a + 1) == 9) {
        a9++;
      } else if ((a + 1) == 10) {
        a10++;
      }
    } else if (b > a && b > c && b > d) {
      printf("%d Base %d\n", arr[i], b + 1);
      if ((b + 1) == 1) {
        a1++;
      } else if ((b + 1) == 2) {
        a2++;
      } else if ((b + 1) == 3) {
        a3++;
      } else if ((b + 1) == 4) {
        a4++;
      } else if ((b + 1) == 5) {
        a5++;
      } else if ((b + 1) == 6) {
        a6++;
      } else if ((b + 1) == 7) {
        a7++;
      } else if ((b + 1) == 8) {
        a8++;
      } else if ((b + 1) == 9) {
        a9++;
      } else if ((b + 1) == 10) {
        a10++;
      }
    } else if (c > a && c > b && c > d) {
      printf("%d Base %d\n", arr[i], c + 1);
      if ((c + 1) == 1) {
        a1++;
      } else if ((c + 1) == 2) {
        a2++;
      } else if ((c + 1) == 3) {
        a3++;
      } else if ((c + 1) == 4) {
        a4++;
      } else if ((c + 1) == 5) {
        a5++;
      } else if ((c + 1) == 6) {
        a6++;
      } else if ((c + 1) == 7) {
        a7++;
      } else if ((c + 1) == 8) {
        a8++;
      } else if ((c + 1) == 9) {
        a9++;
      } else if ((c + 1) == 10) {
        a10++;
      }
    } else if (d > a && d > b && d > c) {
      printf("%d Base %d\n", arr[i], d + 1);
      if ((d + 1) == 1) {
        a1++;
      } else if ((d + 1) == 2) {
        a2++;
      } else if ((d + 1) == 3) {
        a3++;
      } else if ((d + 1) == 4) {
        a4++;
      } else if ((d + 1) == 5) {
        a5++;
      } else if ((d + 1) == 6) {
        a6++;
      } else if ((d + 1) == 7) {
        a7++;
      } else if ((d + 1) == 8) {
        a8++;
      } else if ((d + 1) == 9) {
        a9++;
      } else if ((d + 1) == 10) {
        a10++;
      }

    } else if (a == b && a > c && a > d) {
      printf("%d Base %d\n", arr[i], a + 1);
      if ((a + 1) == 1) {
        a1++;
      } else if ((a + 1) == 2) {
        a2++;
      } else if ((a + 1) == 3) {
        a3++;
      } else if ((a + 1) == 4) {
        a4++;
      } else if ((a + 1) == 5) {
        a5++;
      } else if ((a + 1) == 6) {
        a6++;
      } else if ((a + 1) == 7) {
        a7++;
      } else if ((a + 1) == 8) {
        a8++;
      } else if ((a + 1) == 9) {
        a9++;
      } else if ((a + 1) == 10) {
        a10++;
      }
    } else if (b == a && b > c && b > d) {
      printf("%d Base %d\n", arr[i], b + 1);
      if ((b + 1) == 1) {
        a1++;
      } else if ((b + 1) == 2) {
        a2++;
      } else if ((b + 1) == 3) {
        a3++;
      } else if ((b + 1) == 4) {
        a4++;
      } else if ((b + 1) == 5) {
        a5++;
      } else if ((b + 1) == 6) {
        a6++;
      } else if ((b + 1) == 7) {
        a7++;
      } else if ((b + 1) == 8) {
        a8++;
      } else if ((b + 1) == 9) {
        a9++;
      } else if ((b + 1) == 10) {
        a10++;
      }

    } else if (c == a && c > b && c > d) {
      printf("%d Base %d\n", arr[i], c + 1);
      if ((c + 1) == 1) {
        a1++;
      } else if ((c + 1) == 2) {
        a2++;
      } else if ((c + 1) == 3) {
        a3++;
      } else if ((c + 1) == 4) {
        a4++;
      } else if ((c + 1) == 5) {
        a5++;
      } else if ((c + 1) == 6) {
        a6++;
      } else if ((c + 1) == 7) {
        a7++;
      } else if ((c + 1) == 8) {
        a8++;
      } else if ((c + 1) == 9) {
        a9++;
      } else if ((c + 1) == 10) {
        a10++;
      }

    } else if (d == a && d > b && d > c) {
      printf("%d Base %d\n", arr[i], d + 1);
      if ((d + 1) == 1) {
        a1++;
      } else if ((d + 1) == 2) {
        a2++;
      } else if ((d + 1) == 3) {
        a3++;
      } else if ((d + 1) == 4) {
        a4++;
      } else if ((d + 1) == 5) {
        a5++;
      } else if ((d + 1) == 6) {
        a6++;
      } else if ((d + 1) == 7) {
        a7++;
      } else if ((d + 1) == 8) {
        a8++;
      } else if ((d + 1) == 9) {
        a9++;
      } else if ((d + 1) == 10) {
        a10++;
      }

    } else if (a == b && a == c && a > d) {
      printf("%d Base %d\n", arr[i], a + 1);
      if ((a + 1) == 1) {
        a1++;
      } else if ((a + 1) == 2) {
        a2++;
      } else if ((a + 1) == 3) {
        a3++;
      } else if ((a + 1) == 4) {
        a4++;
      } else if ((a + 1) == 5) {
        a5++;
      } else if ((a + 1) == 6) {
        a6++;
      } else if ((a + 1) == 7) {
        a7++;
      } else if ((a + 1) == 8) {
        a8++;
      } else if ((a + 1) == 9) {
        a9++;
      } else if ((a + 1) == 10) {
        a10++;
      }
    } else if (b == a && b == c && b > d) {
      printf("%d Base %d\n", arr[i], b + 1);
      if ((b + 1) == 1) {
        a1++;
      } else if ((b + 1) == 2) {
        a2++;
      } else if ((b + 1) == 3) {
        a3++;
      } else if ((b + 1) == 4) {
        a4++;
      } else if ((b + 1) == 5) {
        a5++;
      } else if ((b + 1) == 6) {
        a6++;
      } else if ((b + 1) == 7) {
        a7++;
      } else if ((b + 1) == 8) {
        a8++;
      } else if ((b + 1) == 9) {
        a9++;
      } else if ((b + 1) == 10) {
        a10++;
      }

    } else if (c == a && c == b && c > d) {
      printf("%d Base %d\n", arr[i], c + 1);
      if ((c + 1) == 1) {
        a1++;
      } else if ((c + 1) == 2) {
        a2++;
      } else if ((c + 1) == 3) {
        a3++;
      } else if ((c + 1) == 4) {
        a4++;
      } else if ((c + 1) == 5) {
        a5++;
      } else if ((c + 1) == 6) {
        a6++;
      } else if ((c + 1) == 7) {
        a7++;
      } else if ((c + 1) == 8) {
        a8++;
      } else if ((c + 1) == 9) {
        a9++;
      } else if ((c + 1) == 10) {
        a10++;
      }

    } else if (d == a && d == b && d > c) {
      printf("%d Base %d\n", arr[i], d + 1);
      if ((d + 1) == 1) {
        a1++;
      } else if ((d + 1) == 2) {
        a2++;
      } else if ((d + 1) == 3) {
        a3++;
      } else if ((d + 1) == 4) {
        a4++;
      } else if ((d + 1) == 5) {
        a5++;
      } else if ((d + 1) == 6) {
        a6++;
      } else if ((d + 1) == 7) {
        a7++;
      } else if ((d + 1) == 8) {
        a8++;
      } else if ((d + 1) == 9) {
        a9++;
      } else if ((d + 1) == 10) {
        a10++;
      }

    } else if (a == b && a == c && a > d) {
      printf("%d Base %d\n", arr[i], a + 1);
      if ((a + 1) == 1) {
        a1++;
      } else if ((a + 1) == 2) {
        a2++;
      } else if ((a + 1) == 3) {
        a3++;
      } else if ((a + 1) == 4) {
        a4++;
      } else if ((a + 1) == 5) {
        a5++;
      } else if ((a + 1) == 6) {
        a6++;
      } else if ((a + 1) == 7) {
        a7++;
      } else if ((a + 1) == 8) {
        a8++;
      } else if ((a + 1) == 9) {
        a9++;
      } else if ((a + 1) == 10) {
        a10++;
      }
    } else if (b == a && b == c && b == d) {
      printf("%d Base %d\n", arr[i], b + 1);
      if ((b + 1) == 1) {
        a1++;
      } else if ((b + 1) == 2) {
        a2++;
      } else if ((b + 1) == 3) {
        a3++;
      } else if ((b + 1) == 4) {
        a4++;
      } else if ((b + 1) == 5) {
        a5++;
      } else if ((b + 1) == 6) {
        a6++;
      } else if ((b + 1) == 7) {
        a7++;
      } else if ((b + 1) == 8) {
        a8++;
      } else if ((b + 1) == 9) {
        a9++;
      } else if ((b + 1) == 10) {
        a10++;
      }
    } else if (c == a && c == b && c == d) {
      printf("%d Base %d\n", arr[i], c + 1);
      if ((c + 1) == 1) {
        a1++;
      } else if ((c + 1) == 2) {
        a2++;
      } else if ((c + 1) == 3) {
        a3++;
      } else if ((c + 1) == 4) {
        a4++;
      } else if ((c + 1) == 5) {
        a5++;
      } else if ((c + 1) == 6) {
        a6++;
      } else if ((c + 1) == 7) {
        a7++;
      } else if ((c + 1) == 8) {
        a8++;
      } else if ((c + 1) == 9) {
        a9++;
      } else if ((c + 1) == 10) {
        a10++;
      }
    } else if (d == a && d == b && d == c) {
      printf("%d Base %d\n", arr[i], d + 1);
      if ((d + 1) == 1) {
        a1++;
      } else if ((d + 1) == 2) {
        a2++;
      } else if ((d + 1) == 3) {
        a3++;
      } else if ((d + 1) == 4) {
        a4++;
      } else if ((d + 1) == 5) {
        a5++;
      } else if ((d + 1) == 6) {
        a6++;
      } else if ((d + 1) == 7) {
        a7++;
      } else if ((d + 1) == 8) {
        a8++;
      } else if ((d + 1) == 9) {
        a9++;
      } else if ((d + 1) == 10) {
        a10++;
      }
    }
  }
  printf("\n\nBase 1 : %d\n", a1);
  printf("Base 2 : %d\n", a2);
  printf("Base 3 : %d\n", a3);
  printf("Base 4 : %d\n", a4);
  printf("Base 5 : %d\n", a5);
  printf("Base 6 : %d\n", a6);
  printf("Base 7 : %d\n", a7);
  printf("Base 8 : %d\n", a8);
  printf("Base 9 : %d\n", a9);
  printf("Base 10 : %d\n", a10);
  printf("\n(1)");
  for (int one = 0; one < a1; one++) {
    printf(".");
  }
  printf("\n(2)");
  for (int two = 0; two < a2; two++) {
    printf(".");
  }
  printf("\n(3)");
  for (int three = 0; three < a3; three++) {
    printf(".");
  }
  printf("\n(4)");
  for (int four = 0; four < a4; four++) {
    printf(".");
  }
  printf("\n(5)");
  for (int five = 0; five < a5; five++) {
    printf(".");
  }
  printf("\n(6)");
  for (int six = 0; six < a6; six++) {
    printf(".");
  }
  printf("\n(7)");
  for (int seven = 0; seven < a7; seven++) {
    printf(".");
  }
  printf("\n(8)");
  for (int eight = 0; eight < a8; eight++) {
    printf(".");
  }
  printf("\n(9)");
  for (int nine = 0; nine < a9; nine++) {
    printf(".");
  }
  printf("\n(10)");
  for (int ten = 0; ten < a10; ten++) {
    printf(".");
  }

  return 0;
}
