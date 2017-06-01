#include <stdio.h>

int any(char s1[], char s2[]);

int main()
{
  int res = any("sup", "dude");

  printf("%d", res);
}

int any(char s1[], char s2[])
{
  /*A better way is to sort s2 and use binary search*/
  for (int i = 0; s1[i] != '\0'; i++) {
    for (int j = 0; s2[j] != '\0'; j++) {
      if (s1[i] == s2[j])
        return i;
    }
  }
  return -1;
}
