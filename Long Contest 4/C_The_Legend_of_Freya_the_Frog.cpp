#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
          long long x, y, k;
          cin >> x >> y >> k;

          long long x_need = (x + k - 1)/k;
          long long y_need = (y + k - 1)/k;

          long long total_moves;

          if(x_need <= y_need){
            total_moves = 2 * y_need;
          }
          else{
            total_moves = 2 * x_need - 1;
          }

          cout << total_moves <<endl;

  
          }

  return 0;

}
