#include<iostream>
using namespace std;
 int main()
 {
     int p, c,m, total,percentage;
     cin>>p>>c>>m;
     cout<<p<<c<<m;

     total=c+p+m;
     cout<<total;
     percentage=total*100/300;
     cout<<percentage;
     return 0;

 }