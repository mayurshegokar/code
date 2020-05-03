#include <iostream>
using namespace std;

void subarr(int arr[],int data[],int s,int e,int i,int k) {
  if (i==k) {
    for (int j=0;j<k;j++) {
      cout<<data[j]<<" ";
    }
    cout<<endl;
    return;
  }
  else {
    for (int j=s;j<=e&&e-j+1>=k-i;j++) {
      data[i]=arr[j];
      subarr(arr,data,j+1,e,i+1,k);
    }
  }
}

int main()
{
  int n;
  cin>>n;
  int arr[n];
  for (int c=0;c<n;c++) {
    cin>>arr[c];
  }
  int k;
  cin>>k;
  int data[k];
  subarr(arr,data,0,n-1,0,k);
  return 0;
}
