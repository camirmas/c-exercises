#include <stdio.h>

int binsearch(int x, int lst[], int n);

int main()
{
  int lst[] = {1, 2, 3, 4};
  int res = binsearch(1, lst, 4);
  printf("%d", res);

  return 0;
}

int binsearch(int x, int lst[], int n)
{
  int low, high, mid;

  low = 0;
  high = n - 1;

  while (low <= high) {
    mid = (low + high) / 2;
    if (x < lst[mid])
      high = mid - 1;
    else if (x > lst[mid])
      low = mid + 1;
    else
      return mid;
  }
  return -1;
}
