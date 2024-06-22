#include <iostream>
using namespace std;
 
int main() {
    long long int n, sum = 0;
    cin >> n;
    long long int temp = n;
    n -= 1;
    while(n--){
      int a;
      cin >> a;
      sum += a;
    }
    //cout << sum << endl;
    cout << (temp * (temp + 1) / 2) - sum << "\n";
    return 0;
}
