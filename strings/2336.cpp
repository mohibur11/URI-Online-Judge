#include<bits/stdc++.h>

#define ll              long long int
#define ull             unsigned long long int
#define pii             pair < int, int>
#define pll             pair < ll, ll>
#define sc              scanf
#define scin(x)         sc("%d",&(x))
#define scln(x)         sc("%lld",&(x))
#define pf              printf
#define NL              pf("\n")
#define ms(a,b)         memset(a,b,sizeof(a))
#define pb(a)           push_back(a)
#define mp              make_pair
#define db              double
#define EPS             10E-10
#define ff              first
#define ss              second
#define sqr(x)          (x)*(x)
#define vi              vector< int >
#define vl              vector< ll >
#define vii             vector<vector< int > >
#define vll             vector<vector< ll > >
#define DBG             pf("HI\n")
#define M             1000000007
#define CIN             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define RUN_CASE(t,T)   for(__typeof(t) t=1;t<=T;t++)
#define CASE(t)         printf("Case %d: ",t)
#define CASEL(t)        printf("Case %d:\n",t)
#define intlimit        2147483648
#define longlimit       9223372036854775808
#define infinity        (1<<28)
#define gcd(a, b)       __gcd(a,b)
#define lcm(a, b)       ((a)*(b)/gcd(a,b))
#define mx              1234567899
#define PI              2*acos(0.0)
#define rep(i,a,b)      for(ll i=a; i<=b; i++)
#define rev(i,a,b)      for(ll i=a; i>=b; i--)
#define file             #define file            freopen("E:\\file.txt", "r", stdin);ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

///--------------Graph Moves--------------------------------------
///const int fx[] = {+1,-1,+0,+0};
///const int fy[] = {+0,+0,+1,-1};
///const int fx[] = {+0,+0,+1,-1,-1,+1,-1,+1}; ///King's move
///const int fy[] = {-1,+1,+0,+0,+1,+1,-1,-1}; ///king's Move
///const int fx[] = {-2,-2,-1,-1,+1,+1,+2,+2}; ///knight's move
///const int fy[] = {-1,+1,-2,+2,-2,+2,-1,+1}; ///knight's move
///---------------------------------------------------------------

long long BigMod(long long int a, long long int b) { /// a function to determine a^b(mod M)
    long long remainder, answer = 1;                            /// set two variables for remainder and answer
    remainder = a%M;                                         /// setting remainder as
    while(b!=0)                                                     ///  loop occurs until b is not equal to 0
    {
        if(b%2==1) answer = (answer*remainder)%M;                  /// checking if b is odd
                /// taking the present remainder in the answer if b is odd
        remainder = (remainder*remainder)%M;    /// making remainder double on each turn of the loop
        b/=2;                                  /// reducing b by dividing it by 2 in every turn,
    }
    return answer;
}
bool cmp(int a,int b)
{
    return a>b;
}
int main()
{
    int sz;
    vl v;
    for(int i=0;i<1002;i++)
        v.pb(BigMod(26,i));
    string s;
    ll ans = 0;
    while(cin >> s)
    {
        sz = s.size();
        ans = 0;
        for(int i=0;i<sz;i++)
        {
            ans = (ans + (v[i]*(s[sz-i-1]-65))%M)%M;
        }
        pf("%lld\n", ans);
    }
    return 0;
}
