#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t!=0) {
    	int n;
    	cin>>n;
    	int a[n];
    	long int sum=0;
    	for (int i=0;i<n;i++) {
    	    cin>>a[i];
    	    for (int j=0;j<i;j++) {
    	        if (a[i]>a[j]) {
    	            int temp=a[i];
    	            a[i]=a[j];
    	            a[j]=temp;
    	        }
    	    }
    	}
    	for (int i=0;i<n;i++) {
    	    if (a[i]-i>0) {
    	        a[i]=a[i]-i;
    	    }
    	    else {
    	        a[i]=0;
    	    }
    	    sum+=a[i];
    	}
    	cout<<sum%1000000007;
    	cout<<endl;
    	t=t-1;
    }
	return 0;
}
