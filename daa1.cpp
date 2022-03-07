#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
int key,nooftimes;
cin>>key;
for(int i=0;i<n;i++){
    if(a[i]==key){
            nooftimes++;


    }
    if(nooftimes==0){
        cout<<"key is not present"<<endl;

    }
    else{
        cout<<"key is present"<<endl;
    }
   return 0;
}
}
