#include <stdio.h>
#include <stdlib.h>
int main()
{
  float* arr = (float*)malloc(10*sizeof(float));
  for (int i = 0; i < 10; i++) {
    printf("%f\n", arr[i]);
}
  free(arr);
  return 0;
}
