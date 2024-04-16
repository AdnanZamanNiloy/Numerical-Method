#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,fast-math,unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
using namespace std;

#define ll long long
#define ld long double
#define fr first
#define sc second
#define mp make_pair
#define pb push_back
#define pp pop_back
#define nn "\n"
#define mod 1000000007
#define N 200005
#define PI 2 * acos(0.0)

#define sz(x) (int)(x).size()
#define all(v) v.begin(), v.end()
#define srt(v) sort(v.begin(), v.end())
#define rev(v) reverse(v.begin(), v.end())
#define rall(v) v.rbegin(), v.rend()
#define rsrt(v) sort(v.rbegin(), v.rend())
#define grtsrt(v) sort(v.begin(), v.end(), greater<int>())
#define mnv(v) *min_element(v.begin(), v.end())
#define mxv(v) *max_element(v.begin(), v.end())
#define dbg(x) cerr << (#x) << " = " << (x) << "\n"
// #define cerr if (false) cerr
#define EP 0.01

ld f(ld x)
{
    return x * x * x - 4 * x - 10;
}

void bisection(ld a, ld b)
{
    if (f(a) * f(b) >= 0)
    {
        cout << "You have not valid a b" << nn;
        return;
    }
    ld c = a;
    while ((b - a) >= EP)
    {
        c = (a + b) / 2;

        if (f(c) == 0.0)
            break;

        else if (f(c) * f(a) < 0)
            b = c;
        else
            a = c;
    }
    cout << "The value of root: " << c;
    cout << nn;
}

int main()
{
    ld a, b;
    cin >> a >> b;
    bisection(a, b);
    return 0;
}