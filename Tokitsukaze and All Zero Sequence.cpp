#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>a(n);
        int cnt0=0;
        bool flag=false;
        for(int i=0;i<n;i++)
        {    
        cin>>a[i];
        if(a[i]==0) cnt0++;
        }
        sort(a.begin(),a.end());
        if(cnt0>0) cout<<n-cnt0<<"\n";
        else {
            for(int i=1;i<n;i++){
                if(a[i]==a[i-1]) flag=true;
            }
            if(flag) cout<<n<<endl;
            else cout<<n+1<<endl;
        }
}
}
