#include <iostream>
#include <set>
using namespace std;
 
#define ll long long
 
int main() {
    ll n;
    cin >> n;
    set<int> s;
    for(int i = 0; i < n; i++){
      ll x;
      cin >> x;
      s.insert(x);
    }
    cout << s.size() << "\n";
    return 0;
}
