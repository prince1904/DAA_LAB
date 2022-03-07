#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
for(int i=0;i<n;i++){
    for(int j=0;j<n-1;j++){
        for(int k=j+1;k<n;k++){
            if(a[i]=a[j]+a[k]){
                cout<<j<<" "<<k<<" "<<i<<endl;
            }
        }
    }
}
return 0;
}
