#include<iostream>
#include<cmath>
using namespace std;

#define size 10000

int main(){
  long nums[size];

  int i, i1, i2, n;

  nums[1] = 1;
  i1 = 1;
  i2 = 1;
  n = 2015;  
  for(i = 2; i <= n; i++) {
    if (2*nums[i1] < 3*nums[i2]) {
      nums[i] = 2*nums[i1++] + 1;
    } else {
      nums[i] = 3*nums[i2] + 1;
      if (2*nums[i1] == 3*nums[i2]) {
        i1++;
      }
      i2++;
    }
  }
  printf("[%d]: %ld\n", n, nums[n]);
}
