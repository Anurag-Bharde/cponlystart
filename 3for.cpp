// fibonaci series
#include <bits/stdc++.h>
using namespace std;

int main() {
 int n;
 cin>>n;
 
      int a=0;
      int b=1;
     int k =0;
      for (int i=1;i<=n;i++){
          k=a+b;
          a=b;
          b=k;
          cout<<a+b<<" ";
          
      }
    return 0;
}