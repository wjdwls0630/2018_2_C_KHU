#include <stdio.h>

int main() {
  int nums[5]={2,19,1,27,16};
  int target=nums[0];
  for (int i = 0; i < 5; i++) {
    printf("nums[%d] is %2d\n",i,nums[i] );
    if (target<nums[i]) {
      target=nums[i];
    }
  }
  printf("\n최대값은 %d 이다.",target );
  return 0;
}
