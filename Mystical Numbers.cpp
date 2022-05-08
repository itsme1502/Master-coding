#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        int hsh[n+1][33]={0,0};
        for(int i=0;i<n;i++){ 
            cin>>a[i];
        }
        for(int i=1;i<=n;i++){
            for(int j=0;j<33;j++){
                hsh[i][j] += hsh[i-1][j];
            }
            int MSB0 = 32;//assign a value 32 for which MSB is 0 becuase log(0) not defined. 
            if(a[i-1]!=0) MSB0=log2(a[i-1]);
            hsh[i][MSB0]++;
        }
        int q;cin>>q;
        while(q--){
            int l,r,x;
            cin>>l >>r >>x;
            int cnt=0;
            int ans;
            int MSB0=32;
            if(x!=0) MSB0=log2(x);
            cnt += hsh[r][MSB0]-hsh[l-1][MSB0];
            ans = (r-l+1)-cnt;
            cout<<ans<<endl;
        }
    }
}