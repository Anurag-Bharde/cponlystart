#include<bits/stdc++.h>
using namespace std;
int mani(){
    int n;
    cin>>n;

    int ans =0;
    int i;
    while (n!=0){
      int bit = n & 1;

      ans = (bit * pow(10, i)) + ans;

      n=n>>1;
      i++;
    }
    cout<<" ans is "<<ans<<endl;
    return 0;
}
