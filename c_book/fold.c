#include <stdio.h>
#include <string.h>

void fold(char s[], int n);

int main()
{
  char s[] = "hello there super";

  printf("%s", s);
}

void fold(char s[], int n)
{
  int len;
  int last_blank;

  last_blank = 0;
  len = strlen(s);

  for (int i = 0; i < len - 1; i++) {
    if (s[i] == '\n' || s[i] == ' ' || s[i] == '\t')
      last_blank = i;

    if (i == (n - 1) && (s[i] == '\t' && s[i] == ' ' && s[i] == '\t'))
      s[i] = '\n';
    else if (i == (n - 1) && last_blank > 0) {
      s[last_blank] = '\n';
    }
  }
}
