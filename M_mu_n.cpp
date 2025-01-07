#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string u;
ll v;
void Init()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  freopen("M_mu_n.INP","r",stdin);
  freopen("M_mu_n.OUT","w",stdout);
}
string cong (string a, string b)
{
    string k;
    if (a.size()==b.size())
    {
         k = '0'+a;
    }
    else
    {
         k=a;
    }
    ll du=0;
    for (ll i=b.size()-1;i>=0;i--)
    {
        ll m= (k[i]-48)+(b[i]-48);
        k[i]= ((m+du)%10)+48;
        du = (m+du)/10;
    }
    if (du!=0)
    {
        stringstream q;
        q<<du;
        k=q.str()+k;
    }
    return k;
}
string nhan( string a,string b)
{
  string ans;
    for (ll i=b.size()-1;i>=0;i--)
    {
       string k=a;
       ll du =0;
        for (ll j=a.size()-1;j>=0;j--)
        {
            ll m = (b[i]-48)*(a[j]-48);
            k[j]= ((m+du)%10)+48;
            du = (m+du)/10;
        }

        if (du!=0)
        {
            stringstream q;
            q<<du;
            k=q.str()+k;
        }

        if (i==b.size()-1)
        {
            ans=k;

        }
        else
        {
             ans= cong (ans,k);
        }

    }
    return ans;
}
void xuly()
{
    cin>>u;
    cin>>v;
    string ans;
    ans=u;
    for (ll i =2;i<=v;i++)
    {
        ans=nhan(ans,u);
    }
    cout<<ans;
}
int main()
{
    Init();
    xuly();
    return 0;
}
