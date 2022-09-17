#include <stdio.h>

// helper function that:
// returns 1 if x is in A
// and 0 otherwise

int findx(int *A, int B)
{

  if (A == NULL)
  {
    return -1;
  }
  for (int i = B - 1; i > 0; i--)
  {
    for (int j = 0; j < i; j++)
    {
      if (A[j] > A[j + 1])
      {
        long temp;
        temp = A[j];
        A[j] = A[j + 1];
        A[j + 1] = temp;
      }
    }
  }

  return 0;
}

// the input has been read into an array A
// for you already

int main(void)
{

  int N;
  scanf("%d\n", &N);

  int A[N];
  for (int i = 0; i < N; i++)
  {
    scanf("%d", &A[i]);
  }
  findx(A, sizeof(A) / sizeof(A[0]));
  int ans = 0;
  for (int i = 0; i < N; i++)
  {
    if (ans >= A[i])
    {
      ans = A[i] + 1;
    }
  }
  printf("%d", ans);

  return 0;
}
