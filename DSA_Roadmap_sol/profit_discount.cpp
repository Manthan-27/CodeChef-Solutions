#include <bits/stdc++.h>
using namespace std;

int fun( int A[], int n, int y  ){
    
    int dis = 0;
    for(int i=0 ;i< n; i++){
        if(A[i] < y ) dis+=0;
        else{
            dis+=A[i] - y;
    }
    }
     return dis;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        int a[n];
        int total =0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            total+= a[i];
            
        }
      
        bool take = false ; 
        int after_dis = fun(a,n, y) + x ; 
        if(after_dis < total) take = true;
        
        if(take) cout << "COUPON" << endl;
        else{
            cout << "NO COUPON" << endl;
        }
    }

}
