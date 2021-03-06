#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
#define PI acos(-1.0)
typedef long long ll;
typedef unsigned long long llu;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;
typedef map<string, int> msi;
#define REP(i, b, e)\
    for(int i = int(b); i <= int(e); i++)
#define TRvi(c, it)\
    for(vi::iterator it = (c).begin(); it != (c).end(); ++it )
#define TRvii(c, it)\
    for(vii::iterator it = (c).begin(); it != (c).end(); ++it )
#define sf scanf
#define pf printf
#define si(x) sf("%d",&x)
#define in(x) cin>>x
#define out(x) cout<<(x)
#define ln length()
#define sz size()
#define clr clear()
#define pb push_back
#define mp make_pair
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define mem(a,b) memset(a,b,sizeof(a))
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a * (b / gcd(a,b)))
//int dx[]={1,0,-1,0};
//int dy[]={0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1};
//int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1,1,2};
//int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction
vector<int> get_numbers(string str)
{
    vector<int> retVec;
    stringstream stream(str);
    int num;
    while(stream >> num) retVec.push_back(num);
    return retVec;
}
int main()
{
//    READ("in.txt");
//    double cl = clock();
    int cnum;
    si(cnum);getchar();
    REP(cs, 1, cnum)
    {
        string str;
        getline(cin, str);
        vector<int> vec = get_numbers(str);
        int l = vec.sz, maxv = -1;
        REP(i, 0, l - 1)
        REP(j, 0, l - 1)
        {
            if(i != j)
            {
                int gcdv = gcd(vec[i], vec[j]);
                if(gcdv > maxv) maxv = gcdv;
            }
        }
        pf("%d\n", maxv);
    }
//    cl = clock() - cl;
//    pf("Total Execution Time = %lf seconds\n", cl / CLOCKS_PER_SEC);
    return 0;
}
