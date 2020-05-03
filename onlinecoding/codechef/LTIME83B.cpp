#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while (t!=0) {
	    int n,s;
	    cin>>n>>s;
	    int a[2][n];
	    for (int i=0;i<2;i++) {
	        for (int j=0;j<n;j++) {
	            cin>>a[i][j];
	        }
	    }
	    int min0=100;
	    int min1=100;
	    for (int j=0;j<n;j++) {
	       if (a[1][j]==0) {
  	        if (min0>a[0][j]) {
  	            min0=a[0][j];
  	        }
	       }
	       if (a[1][j]==1) {
  	        if (min1>a[0][j]) {
  	            min1=a[0][j];
  	        }
	       }
	    }
	    if (min0+min1<=100-s) {
	        cout<<"yes";
	    }
	    else {
	        cout<<"no";
	    }
	    cout<<endl;
	    t=t-1;
	}
	return 0;
}

