#include <iostream>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while (t!=0) {
    int h,m,a1,a2,a;
    cin>>h>>m;
    a1=(h*30)+(m/2);
    a2=m*6;
    if(a1>a2) {
      a=a1-a2;
    } 
    else {
      a=a2-a1;
    }
    if (a<=180) {
      cout<<a;
    }
    else {
      cout<<360-a;
    }
    cout<<"\n";
    t=t-1;
  }
  return 0;
}
