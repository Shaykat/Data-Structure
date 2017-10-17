#include<bits/stdc++.h>
using namespace std;

// input output
#define pf           printf
#define sf(n)        scanf("%d", &n)
#define sfl(n)        scanf("%lld", &n)
#define sfc(n)        scanf("%c", &n)
#define sff(a,b)     scanf("%d %d", &a, &b)
#define sfff(a,b,c)  scanf("%d %d %d", &a, &b, &c)
#define INP          freopen("in.txt", "r", stdin);  // file input
#define OUT          freopen("out.txt", "w", stdout);  // file output

// operations
#define pb           push_back
#define mem(n, val)  memset((n), val, sizeof(n))
#define mp           make_pair
#define ff first
#define se second

// constant
#define MOD          1000000007
#define inf   1<<30                                           //infinity value
#define eps   1e-9

// Loop
#define For(i, a, b) for(int i = a; i <= b; i++)
#define Ror(i, a, b) for(int i = a; i >= b; i--)
#define all(v)       v.begin(), v.end()

// functions
#define gcd(a,b)     ll _gcd(int a,int b){ if(b%a == 0) return a; _gcd(b%a,a); }
#define lcm(a,b)     ((a*b)/gcd(a,b))

// binary tree || segment tree
#define cnd          tr[idx]
#define lnd          tr[idx << 1]
#define rnd          tr[lnd + 1]
#define leftcl       lnd,st,mid
#define rightcl      rnd,mid+1,ed

// typedef
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;
typedef pair<int, string> pis;
typedef priority_queue<int> pq;

// @Shaykat@
/////////////////////////////////// template //////////////////////////////
int n,e,p,q,Query;
int par[1000010];

void makset(int n){
    par[n] = n;
}

int find(int a){
    if(par[a] == a) return a;
    par[a] = find(par[a]);
    return par[a];
}

void unin(int a, int b){
    int u = find(a);
    int v = find(b);
    find(a);
    par[u] = v;
}

int main(){
    sff(n,e);
    For(i,1,n){
        makset(i);
    }
    For(i,1,e){
        sff(p,q);
        unin(p,q);
    }
    For(i,1,10){
        cout << par[i] << " ";
    }

    /*sf(Query);
    For(i,1,Query){
        sff(p,q);
        if(find(p) == find(q)){
            cout << "friends\n";
        }
        else{
            cout << "not friends\n";
        }
    }*/
    return 0;
}
