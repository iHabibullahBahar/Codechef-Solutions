#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int sev=n/7;
        int k=(n-(sev*7));
        int two=k/2;
        int l=sev*7+two*2;
        if(two>=0)
        {
            if(l==n)
            {
                cout<<"YES"<<endl;
            }
            else
            cout<<"NO"<<endl;
        }
        else
        cout<<"NO"<<endl;
        // cout<<sev<<" "<<two<<"  ";
        // cout<<l<<endl;
        
        
    }
}
