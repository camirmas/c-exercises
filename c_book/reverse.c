#include <stdio.h>
#include <string.h>

#define MAXLINE 1000

int mygetline(char line[], int maxline);
void reverse(char s[], char res[]);
void clear(char s[]);

int main()
{
  char line[MAXLINE];
  char res[MAXLINE];

  while (mygetline(line, MAXLINE) > 0) {
    reverse(line, res);
    printf("%s\n", res);
    clear(line);
    clear(res);
  }

  return 0;
}

void reverse(char s[], char res[])
{
  int len = strlen(s);
  int i;
  i = 0;

  while (len >= 0) {
    len--;
    res[len] = s[i];
    i++;
  }
}

int mygetline(char s[], int lim)
{
  int c, i;

  for (i = 0; i < lim-1 && (c=getchar()) != EOF && c!='\n'; i++)
    s[i] = c;
  if (c == '\n') {
    /*s[i] = c;*/
    i++;
  }
  s[i] = '\0';
  return i;
}

void clear(char s[])
{
  int len;
  len = strlen(s);

  for (int i = 0; i < len; i++) {
    s[i] = 0;
  }
}
