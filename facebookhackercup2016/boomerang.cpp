#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int tt,t,n,x[2001],y[2001],i,j,k,ans;
    long long int dist, arr[2001];
    cin>>t;
    tt=t;
    while(t--){
        
        //inputs
        cin>>n;
        for(i=0;i<n;i++)
            cin>>x[i]>>y[i];
        
        ans=0;
        //distance array filled (order of 10^6, should work fine)
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                dist= pow((x[i]-x[j]),2) + pow((y[i]-y[j]),2) ;
                arr[j]= dist;
                //keyarr[i][j]= dist;
                //keyarr[j][i]= dist;
            }
            
            sort(arr,arr+n);
            
            k=1;
            for(j=0;j<n-1;j++){
                if(arr[j]==arr[j+1])
                    k++;
                else{
                	ans+=(k*(k-1))/2;
                	k=1;
                }    
            }
            if(k)
            	ans+=(k*(k-1))/2;
        }
        /**/
        cout<<"Case #"<<tt-t<<": "<<ans<<endl;
    }
    return 0;
}

