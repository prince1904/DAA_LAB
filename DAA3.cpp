#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
int key;
cin>>key;
int nooftimes=0;

for(int i=0;i<n;i++){
  for(int j=0;j<n;j++){
    if(a[i]==a[j]){
        continue;
    }
    else{
        if(a[i]-a[j]==key){
            nooftimes++;
        }
    }
  }
}
cout<<nooftimes<<endl;
return 0;
}
