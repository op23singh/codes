#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,d,d2,sum=0;
    cin>>n;
    vector<int> r1(n),r2(n);
    for(int i=0;i<n;i++) {
        cin >> r1[i] >> r2[i];
    }
    cout<<"r1    "<<"r2    "<<"d     "<<"d2  "<<endl;
    for(int i=0;i<n;i++){
        d=r1[i]-r2[i];
        d2=d*d;
        sum+=d2;
        cout<<r1[i]<<"    "<<r2[i]<<"    "<<d<<"     "<<d2<<"  "<<endl;
    }
    double ans2=n*((n*n)-1);
    double ans=1-((6*sum)/ans2);
    cout<<"value of summation d2 = "<<sum<<endl;
    cout<<"value of rho(r) is "<<ans;
}