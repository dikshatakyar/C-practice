#include<iostream>
using namespace std;

int main() {
 int r,c;
 cout<<"enter the number of rows and coloumns respectively"<<endl;
 cin>>r>>c;
 
 for(int i=1;i<=r;++i) {
     for(int j=1;j<=c;++j) {
         cout<<"*";
     }
     cout<<endl;
 }
    
    return 0;
    
}