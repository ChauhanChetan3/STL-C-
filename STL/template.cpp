#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;

// *************************pbds***************************

//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;
// template <class T>
// using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// #define ook order_of_key  // Number of elements STRICTLY smaller than X
// #define fbo find_by_order //  *ITERATOR* pointing to the kth element (0 order)
// ********************************************************

#define gcj "Case #"
#define py cout << "YES\n";
#define pn cout << "NO\n";
#define ff first
#define ss second
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define sz(v) ((int)(v).size())
#define con(i, container) for (auto &i : container)
#define f(i, n) for (long long i = 0; i < n; i++)
#define f1(i, n) for (long long i = 1; i <= n; i++)
#define fo(i, a, b) for (long long i = a; i < b; i++)
#define rf(i, n) for (long long i = n - 1; i >= 0; i--)
#define rf1(i, n) for (long long i = n; i >= 1; i--)
#define rfo(i, a, b) for (long long i = a - 1; i >= b; i--)
typedef unsigned long long ull;
typedef long long int ll;
typedef long double lld;
#define mod 1000000007
#define INF (9223372034707292159ll)

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
ll lcm(ll a, ll b) { return (a / gcd(a, b) * b); }
bool isPrime(ll n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}
bool isPowerOfTwo(int n)
{
    if (n == 0)
        return false;
    return (ceil(log2(n)) == floor(log2(n)));
}
bool isPerfectSquare(ll x)
{
    if (x >= 0)
    {
        ll sr = sqrt(x);
        return (sr * sr == x);
    }
    return false;
}
string decToBinary(int n)
{
    string s = "";
    int i = 0;
    while (n > 0)
    {
        s = to_string(n % 2) + s;
        n = n / 2;
        i++;
    }
    return s;
}
ll binaryToDecimal(string n)
{
    string num = n;
    ll dec_value = 0;
    int base = 1;
    int len = num.length();
    for (int i = len - 1; i >= 0; i--)
    {
        if (num[i] == '1')
            dec_value += base;
        base = base * 2;
    }
    return dec_value;
}
#define array(a, n) \
    ll a[n];        \
    f(i, n) cin >> a[i];
#define array1(a, n) \
    ll a[n + 1];     \
    f1(i, n) cin >> a[i];
#define array2(a, n, m) \
    ll a[n][m];         \
    f(i, n) f(j, m) cin >> a[i][j];

#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define fil(x, y) memset(x, y, sizeof(x))
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
ll pwr(ll a, ll b)
{
    a %= mod;
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}
// bool is_prime[1000001];
// void sieve() {fill(is_prime, is_prime + 1000001, true); is_prime[0] = is_prime[1] = false; for (ll i = 2; i <= 1000000; i++) if (is_prime[i]) for (ll j = i * i; j <= 1000000; j += i) is_prime[j] = false;}
ll modexp(ll a, ll b)
{
    if (b == 0)
        return 1;
    ll x = modexp(a, b / 2);
    x = x * x % mod;
    if (b % 2)
        x = x * a % mod;
    return x;
}
ll modinv(ll a) { return pwr(a, mod - 2); }
ll moddiv(ll a, ll b) { return a * modinv(b) % mod; }
ll modfact(ll n)
{
    ll res = 1;
    for (ll i = 2; i <= n; i++)
    {
        res = res * i % mod;
    }
    return res;
}
ll ncr(ll n, ll r)
{
    if (n == r)
        return 1;
    if (r == 0)
        return 1;
    if (r == 1)
        return n;
    ll ans = 1;
    for (ll i = 1; i <= r; i++)
        ans = (ans * (n - i + 1)) / i;
    return ans;
}
ll npr(ll n, ll r)
{
    if (n == r)
        return 1;
    if (r == 0)
        return 1;
    ll ans = 1;
    for (ll i = 1; i <= r; i++)
        ans = (ans * (n - i)) / i;
    return ans;
}

#define ceild(a, b) ((a) / (b) + ((a) % (b) != 0))
#define fastio std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
// #define print(x) cout << (x) << '\n'
#define endl "\n"
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

#define pii pair<ll, ll>
#define mii map<ll, ll>
#define vi vector<ll>
#define vvi vector<vector<ll>>
#define si set<ll>
#define pq priority_queue<ll>
#define rpq priority_queue<ll, vector<ll>, greater<ll>>
#define mmap multimap
#define uset unordered_set
#define mset multiset
#define umap unordered_map
#define vecmax(v) *max_element(all(v))
#define vecmin(v) *min_element(all(v))
#define unique(v) v.erase(std::unique(all(v)), v.end())
#define debug1(x) cout << #x << " : " << x << endl;
#define debug2(x, y) cout << #x << " : " << x << "\t" << #y << " : " << y << endl;
#define debug3(x, y, z) cout << #x << " : " << x << "\t" << #y << " : " << y << "\t" << #z << " : " << z << endl;
#define debug4(x, y, z, w) cout << #x << " : " << x << "\t" << #y << " : " << y << "\t" << #z << " : " << z << "\t" << #w << " : " << w << endl;

// ********************************************************

#define trace(x) cout << '> ' << #x << ':' << x << endl;
#define trace2(x, y) \
    cout << '> ' << #x << ':' << x << " | " << #y << ':' << y << endl;
#define trace3(x, y, z)                                                \
    cout << '> ' << #x << ':' << x << " | " << #y << ':' << y << " | " \
         << #z << ':' << z << endl;
#define trace4(x, y, z, w)                                             \
    cout << '> ' << #x << ':' << x << " | " << #y << ':' << y << " | " \
         << #z << ':' << z << " | " << #w << ':' << w << endl;

// ********************************************************

template <typename T>
ostream &operator<<(ostream &os, const vector<T> &m)
{
    for (int i = 0; i < m.size(); ++i)
        os << m[i] << ' ';
    os << endl;
    return os;
}

template <typename T>
istream &operator>>(istream &is, vector<T> &m)
{
    for (int i = 0; i < m.size(); ++i)
        is >> m[i];
    return is;
}

// ********************************************************

void _print(ll t) { cout << t; }
void _print(int t) { cout << t; }
void _print(string t) { cout << t; }
void _print(char t) { cout << t; }
void _print(lld t) { cout << t; }
void _print(double t) { cout << t; }
void _print(ull t) { cout << t; }

template <class T, class V>
void _print(pair<T, V> p);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(set<T> v);
template <class T, class V>
void _print(umap<T, V> v);
template <class T, class V>
void _print(umap<T, V> v);
template <class T>
void _print(multiset<T> v);
template <class T, class V>
void _print(pair<T, V> p)
{
    cout << "{";
    _print(p.ff);
    cout << ",";
    _print(p.ss);
    cout << "}\n";
}
template <class T>
void _print(vector<T> v)
{
    cout << "[ ";
    for (T i : v)
    {
        _print(i);
        cout << " ";
    }
    cout << "]\n";
}
template <class T>
void _print(set<T> v)
{
    cout << "[ ";
    for (T i : v)
    {
        _print(i);
        cout << " ";
    }
    cout << "]\n";
}
template <class T>
void _print(multiset<T> v)
{
    cout << "[ ";
    for (T i : v)
    {
        _print(i);
        cout << " ";
    }
    cout << "]\n";
}
template <class T, class V>
void _print(map<T, V> v)
{
    cout << "[ ";
    for (auto i : v)
    {
        _print(i);
        cout << " ";
    }
    cout << "]\n";
}
template <class T, class V>
void _print(umap<T, V> v)
{
    cout << "[ ";
    for (auto i : v)
    {
        _print(i);
        cout << " ";
    }
    cout << "]\n";
}

void inout()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

template <typename T>
void print(T a) { cout << a << endl; }
template <typename T, typename... Args>
void print(T a, Args... b)
{
    cout << a << " ";
    print(b...);
}
template <typename T>
void _debug(T a)
{
    cout << "   ";
    if (typeid(a) == typeid(char))
        cout << ' ';
    if (typeid(a) == typeid(string))
        cout << '\"';
    cout << a;
    if (typeid(a) == typeid(char))
        cout << '\'';
    if (typeid(a) == typeid(string))
        cout << '\"';
    cout << "}" << endl;
}
template <typename T, typename... Args>
void _debug(T a, Args... b)
{
    if (typeid(a) == typeid(char))
        cout << '\'';
    if (typeid(a) == typeid(string))
        cout << '\"';
    cout << a;
    if (typeid(a) == typeid(char))
        cout << '\'';
    if (typeid(a) == typeid(string))
        cout << '\"';
    cout << ",\t";
    _debug(b...);
}
template <typename... Args>
void debug(Args... b)
{
    cout << '{' << endl;
    _debug(b...);
}

// ********************************************************

// EVERY SINGLE QUES TAKES YOU TOWARDS YOUR GOAL :)

#define int long long int

signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
      
      
     
        int a,b,c;
        cin>>a>>b>>c;

      

        if(a>b && a>c){
            if(abs(a-b) == c){
                cout<<"yes"<<endl;
            }else{
                cout<<"no"<<endl;
            }
        }
        else if(b>a && b>c){
            if(abs(b-c) == a){
                cout<<"yes"<<endl;
            }else{
                cout<<"no"<<endl;
            }
              
        }else{
            if(abs(c-b) == a){
                cout<<"yes"<<endl;
            }else{
                cout<<"no"<<endl;
            }

        
       }
      
        // vector<int> v;
      //vector<int> v(n);
 
    //  for(int i = 0; i < n; i++)
    //  {
    //     int val;
    //     cin>>val;
    //     v.push_back(val);
    //      // cin>>v[i];
         
    //  }
    //  for(int i = 0; i < n; i++)
    //  {
    //      //pro *= v[i];
    //      cout<<v[i];
    //  }      
    //   //cout<<pro<<endl;
    }
    return 0;
}
