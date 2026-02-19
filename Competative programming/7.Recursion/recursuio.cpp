#include <bits/stdc++.h>
using namespace std;
int fn(int a){
  if(a==0){
    return 0;
  }
  printf("%d\n",a );      // prints 5 to 1
  fn(a-1);s
  // printf("%d\n",a );    // prints 1 to 5
  return 0;
}

int main() {
  fn(5);
}
