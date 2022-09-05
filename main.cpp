#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
  int n, ans;
  cin >> n;
  if (n % 4 == 0 && n != 0){
    ans = 4;
  }
  else{
    ans = n % 4;
  }
  ans = pow(8, ans);
  ans %= 10;
  cout << ans << endl;
}
