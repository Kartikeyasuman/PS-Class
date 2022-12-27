#include<iostream>
using namespace std;
int main(){
int apples,a,b,c;
cout<<"enter the values of a  and b"<<endl;
cin>>a>>b;
c=a;
a=b;
b=c;
cout<<a<<endl<<b;
return 0;
}