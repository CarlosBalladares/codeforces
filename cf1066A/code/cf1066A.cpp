#include <bits/stdc++.h>
#define ASSERT(expected, res)  cout << (expected == res? "\033[1;32mpass\033[0m":"\033[1;31mfail\033[0m" ) << endl;
using namespace std;

int main(){
  int t;
  long L, v_i, l_i, r_i;
  cin>>t;
  while(t--){
    cin >> L >> v_i >> l_i >>r_i;
    long lanterns = L/v_i;
    // if(!(l_i%v_i) || !(r_i%v_i) ){
    //   r_i++;
    // }
    long covered = (r_i/v_i) - (l_i/v_i) ;
    if(!(l_i%v_i) ){
      covered++;
    }
    cout << lanterns-covered << endl;

  }



  return 0;
}
