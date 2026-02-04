#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;
#define el cout << endl;
#define cout(x) cout << x << endl
#define coutt(x) {for(auto it : x){cout << it << " ";}el;}
#define sz(n) (ll)(n).size()
#define pb push_back
#define vc vector
#define debug(x) cout << #x << " = " << x << "\n";
#define vdebug(a) cout << #a << " = "; for(auto x: a) cout << x << " "; cout << "\n";
#define mpr make_pair
#define yyy cout << "YES" << endl;
#define nnn cout << "NO" << endl;
#define xx first
#define yy second
#define at auto
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define max3(a, b, c) max(c, max(a, b))
#define max4(a, b, c, d) max(d, max(c, max(a, b)))
#define countbitset(x) __builtin_popcount(x)

const int M = 1e9 + 7;
const ll inf = 4e18 + 123;
vc<bool> isprime;
vc<ll> pri;

ll up(ll x, ll y){return (x + y - 1) / y;}
int log_a_to_base_b(int a, int b) {return log2(a) / log2(b);}
bool isodd(int num) {return num % 2 != 0;}
bool iseven(int num) {return num % 2 == 0;}
ll gcd(ll a, ll b){if (b == 0)return a;return __gcd(b, a % b);}
ll lcm(ll a, ll b) { return (a * b) / gcd(a, b); }
ll root(ll a){ll x = sqrt(a) + 2;while (x * x > a)x--;return x;}
bool prime(ll n){if (n < 2)return false;for (ll i = 2; i <= sqrt(n); i++){if (n % i == 0)return false;}return true;}

void sieve(ll n) {
    isprime.assign(n + 1, true);
    isprime[0] = isprime[1] = false;
    for (ll i = 2; i * i <= n; ++i) {
        if (isprime[i]) {
            for (ll j = i * i; j <= n; j += i) isprime[j] = false;
        }
    }
    for (ll i = 2; i <= n; ++i) {
        if (isprime[i]) pri.push_back(i);
    }
}

bool isSquare(long long x){if (x >= 0) {long long sr = sqrt(x);return (sr * sr == x);}return false;}
ll upp(ll a, ll b) { return ((a + (b - 1)) / b); }
ll modexp(ll a, ll b){ll ans=1;while(b>0){if((b%2)==1){ans=(ans*a)%M;}a=(a*a)%M;b/=2;}return ans;}

vector<ll> dx = {1, -1, -1, 1}, dy = {1, 1, -1, -1};
inline bool checkBit(ll n, int i) { return n&(1LL<<i); }
inline ll setBit(ll n, int i) { return n|(1LL<<i);; }
inline ll resetBit(ll n, int i) { return n&(~(1LL<<i)); }

bool comp(const pair<ll, ll> &p1, const pair<ll, ll> &p2){
    if(p1.first < p2.first) return 1;
    else if(p1.first == p2.first){
        if(p1.second > p2.second) return 1;
        else return 0;
    }
    else return 0;
}

struct value{
    float a; ll b; string c;
    bool operator<(const value &other)const{
        if(a != other.a) return a < other.a;
        if(b != other.b) return b < other.b;
        return c < other.c;
    }
};

//-----------------------------------------------------------------------------------------------------------

//observation, properties


//              0  0  0  1  1  1  1  1  1  1
//              1  2  3  4  5  6  7  8  9  10 11


void solve() {
    ll n;
    cin >> n;

    vector<ll> v(n);
    map<ll, ll> fre;

    for(ll i = 0 ;  i < n; i++){
        cin >> v[i];
        fre[v[i]]++;
    }

    if(fre[0] == 0 || fre[1] == 0){
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    
}

// ----------------------------------------------------------------------------------------------------------

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t = 1;
    cin >> t;
    for (ll i = 1; i <= t; i++)
    {
        solve();
    }
    return 0;
}
