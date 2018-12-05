#include <iostream>
//#include <cstdlib.h>

using namespace std;

int powmod(int n, int m) {
  int ret = 1;
  for(int i = 0; i < n; ++i)
    ret = ( (ret % m) * (2 % m) ) % m; // expression from above
  return ret; // returns 2 to the power n modulo m
}

int main() {

  int n, m; 
cin>>n>>m;
  cout<<powmod(n, m));

  return 0;
}