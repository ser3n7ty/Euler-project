#include <stdio.h>

int main()
{ 
  int num = 0;
  int sum = 0;
  printf("Please enter the number:\n");
  scanf("%d", &num);
  for(int i=0; i < num; i++)
  {
    if((i % 3 == 0)||(i % 5 == 0)) {
      sum += i;
    }
  }
  printf("The sum of all the multiples of 3 or 5 below %d is %d.", num, sum);
  return 0;
}
