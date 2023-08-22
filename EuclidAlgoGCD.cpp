#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

/*

            gcd(10,40)
            gcd(40,10%40)=gcd(40,10)
            gcd(10,40%10)=gcd(10,0)
           
*/
ll EuclidAlgorithm(ll a,ll b)
{
    if(b==0)
    return a;
    else
    return EuclidAlgorithm(b,a%b);
}
int main()
{
  ll a,b;
  cin >> a >> b;
  cout << EuclidAlgorithm(a,b);
}
