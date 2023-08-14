#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool EfficientPrimeCheck(ll n)
{
    if (n < 2)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0)
        return false;

    for (ll i = 3; i * i < n; i=i+2)//skipping even numbers thats why i=i+2
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    ll n;
    cin >> n;
    cout << EfficientPrimeCheck(n);

}
