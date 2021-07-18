#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define reps(i, s, n) for (int i = (s); i < (n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
#define MOD 998244353

int main(){
  ll a,b,c;
  cin>>a>>b>>c;

  // cout<<ceil(double(a+c)/2.0)<<endl;

  if(b-a==c-b){
    cout<<0<<endl;
    return 0;
  }

  if(b-a<0 && c-b>=0){
    if(a==c){
      cout<<a-b<<endl;
      return 0;
    }
    if(a>c){
      ll x=c+1;
      ll count=b-x;
      if((a+c)%2==0){
        cout<<abs(x-(a+c)/2)<<endl;
        return 0;
      }
      ll y=ceil(double(a+c)/2.0);
      count+=y-x;

      cout<<abs(abs(y-a)-abs(c-y))+count<<endl;
      return 0;
    }
    if(a<c){
      if((a+c)%2==0){
        cout<<((a+c)/2)-b<<endl;
        return 0;
      }
      ll x=a+1;
      ll count=x-b;

      ll y=ceil(double(a+c)/2.0);
      count+=y-x;

      cout<<abs(y-a)-abs(c-y)+count<<endl;
      return 0;
    }
  }
  if(b-a>=0 && c-b<0){
    if(a==c){
      cout<<(b-a)*2<<endl;
      return 0;
    }
    if(a>c){
      cout<<b-a+b-c<<endl;
      return 0;
    }
    if(a<c){
      cout<<c-a+(b-c)*2<<endl;
      return 0;
    }
  }

  if(b-a>=0 && c-b>=0){
    if((b-a)-(c-b)<0){
      ll x=ceil(double(a+c)/2.0);
      ll count=x-b;

      cout<<abs(x-a)-abs(c-x)+count<<endl;
      return 0;
    }
    if((b-a)-(c-b)>0){
      cout<<abs(b-a)-abs(c-b)<<endl;
      return 0;
    }
  }

  if(b-a<=0 && c-b<=0){
    if((b-a)-(c-b)<0){
      if((a+c)%2==0){
        cout<<abs(b-(a+c)/2)<<endl;
        return 0;
      }
      ll x=ceil(double(a+c)/2.0);
      ll count=x-b;

      cout<<abs(abs(x-a)-abs(c-x))+count<<endl;
      return 0;
    }
    if((b-a)-(c-b)>0){
      cout<<abs(abs(b-a)-abs(c-b))<<endl;
      return 0;
    }
  }
}
