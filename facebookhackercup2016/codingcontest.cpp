#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int t,n,arr[100001],i,j,k,l;
	cin>>t;
	l=t;
	while(t--){
		cin>>n;
		for(i=0;i<n;i++)
			cin>>arr[i];
		j=0;
		k=0;
		for(i=0;i<n;i++){
			if(j!=4 && (arr[i+1]-arr[i])<=10 && arr[i+1]>arr[i])
				j++;
				
			else if(j!=4 && (arr[i+1]-arr[i])<=10){
				k+=(4-j);
				j=0;
			}
			
			else if(j!=4 && arr[i+1]>arr[i]){
				arr[i]+=10;
				i--;
				k++;
				j++;
			}
			
			if(j==4)
				j=0;
		}	
		
		cout<<"Case #"<<l-t<<": "<<k<<endl;
	}
	return 0;
}
