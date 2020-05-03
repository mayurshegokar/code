#include <iostream>
using namespace std;

int main()
{
  int m,n;
  cin>>m>>n;
  if (m==n) {
    int a[n][n];
    for (int i=0;i<n;i++) {
      for (int j=0;j<n;j++) {
        cin>>a[i][j];
      }
    }
    int b[n][n];
    for (int i=0;i<n;i++) {
      for (int j=0;j<n;j++) {
        cin>>b[i][j];
      }
    }
    //ADDITION
    int add[n][n];
    for (int i=0;i<n;i++) {
      for (int j=0;j<n;j++) {
        add[i][j]=a[i][j]+b[i][j];
        cout<<add[i][j]<<" ";
      }
      cout<<"\n";
    }
    //MULTIPLICATION
    int mul[n][n];
    for (int i=0;i<n;i++) {
      for (int j=0;j<n;j++) {
        mul[i][j]=0;
        for (int k=0;k<n;k++) {
          mul[i][j]=mul[i][j]+(a[i][k]*b[k][j]);
        }
        cout<<mul[i][j]<<" ";
      }
      cout<<"\n";
    }
  }
  
  return 0;
}
