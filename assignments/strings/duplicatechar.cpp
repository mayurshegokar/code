#include <iostream>
#include <string.h>

using namespace std;

int main()
{
  int t;
  cin>>t;
  while (t!=0) {
    string str;
    cin>>str;
    int count[128]={0};
    int l=str.length();
    for (int i=0;i<l;i++) {
      count[str[i]]++;
    }
    int c=0;
    for (int j=97;j<123;j++) {
      if (count[j]>1) {
        cout<<char(j)<<"="<<count[j]<<" ";
        c++;
      }
    }
    if (c==0) {
      cout<<-1;
    }
    cout<<endl;
    t=t-1;
  }
  
  return 0;
}
