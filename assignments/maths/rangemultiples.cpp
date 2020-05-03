#include <iostream>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while (t!=0) {
    long long int r,p,q;
    long long int c=0;
    cin>>r>>p>>q;
    c=q/r-p/r+1;
    if (p<0&&q<0) {
      if (q%r!=0) {
        c--;
      }
    }
    if (p>=0&&q>=0) {
      if (p%r!=0) {
        c--;
      }
    }
    cout<<c;
    cout<<endl;
    t=t-1;
  }
  return 0;
}
